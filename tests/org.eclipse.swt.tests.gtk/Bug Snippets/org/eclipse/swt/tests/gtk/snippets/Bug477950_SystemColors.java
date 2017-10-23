package org.eclipse.swt.tests.gtk.snippets;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

import org.eclipse.swt.SWT;
import org.eclipse.swt.graphics.Color;
import org.eclipse.swt.layout.FillLayout;
import org.eclipse.swt.widgets.Display;
import org.eclipse.swt.widgets.Shell;
import org.eclipse.swt.widgets.Table;
import org.eclipse.swt.widgets.TableColumn;
import org.eclipse.swt.widgets.TableItem;

/*
 * Title: Bug 477950 - [GTK3] Port SWT colors from using GdkColor to GdkRGBA so alpha is not lost
 * How to run: launch snippet and compare system colors in the columns
 * Bug description: N/A
 * Expected results: GTK CSS column with actual output column. Colors should match or be within +/-2 margin of error.
 * GTK Version(s): 3.14+
 */
public class Bug477950_SystemColors {
	public static void main(String[] args) {
		Display display = new Display();
		Shell shell = new Shell(display);
		shell.setLayout(new FillLayout());
		Table table = new Table(shell, SWT.BORDER | SWT.MULTI | SWT.FULL_SELECTION);
		TableColumn name = new TableColumn(table, SWT.NONE);
		TableColumn gtkCSSRGBA = new TableColumn(table, SWT.NONE);
		TableColumn gtkCSSColor = new TableColumn(table, SWT.NONE);
		TableColumn actualColor = new TableColumn(table, SWT.NONE);
		TableColumn actualRGBA = new TableColumn(table, SWT.NONE);
		name.setText("Color name");
		gtkCSSRGBA.setText("GTK CSS RGBA value");
		gtkCSSColor.setText("GTK CSS color");
		actualColor.setText("Current system color");
		actualRGBA.setText("Current system RGBA value");
		table.setHeaderVisible(true);
		table.setLinesVisible(true);
		name.setWidth(500);
		gtkCSSRGBA.setWidth(150);
		gtkCSSColor.setWidth(150);
		actualColor.setWidth(150);
		actualRGBA.setWidth(150);
		Color [] colArray;
		Map<String, Color []> map = new HashMap<>();
		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_DARK_SHADOW), new Color (display, 0,0,0)};
		map.put("COLOR_WIDGET_DARK_SHADOW", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_NORMAL_SHADOW), new Color (display, 164,164,161)};
		map.put("COLOR_WIDGET_NORMAL_SHADOW", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_LIGHT_SHADOW), new Color (display, 232,232,231)};
		map.put("COLOR_WIDGET_LIGHT_SHADOW", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_HIGHLIGHT_SHADOW), new Color (display, 255,255,255)};
		map.put("COLOR_WIDGET_HIGHLIGHT_SHADOW", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_FOREGROUND), new Color (display, 46,52,54)};
		map.put("COLOR_WIDGET_FOREGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_BACKGROUND), new Color (display, 232,232,231)};
		map.put("COLOR_WIDGET_BACKGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_WIDGET_BORDER), new Color (display, 0,0,0)};
		map.put("COLOR_WIDGET_BORDER", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_LIST_FOREGROUND), new Color (display, 0,0,0)};
		map.put("COLOR_LIST_FOREGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_LIST_BACKGROUND), new Color (display, 255,255,255)};
		map.put("COLOR_LIST_BACKGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_LIST_SELECTION), new Color (display, 74,144,217)};
		map.put("COLOR_LIST_SELECTION", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_LIST_SELECTION_TEXT), new Color (display, 255,255,255)};
		map.put("COLOR_LIST_SELECTION_TEXT", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_INFO_FOREGROUND), new Color (display, 255,255,255)};
		map.put("COLOR_INFO_FOREGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_INFO_BACKGROUND), new Color (display, 0,0,0)};
		map.put("COLOR_INFO_BACKGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_TITLE_FOREGROUND), new Color (display, 255,255,255)};
		map.put("COLOR_TITLE_FOREGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_TITLE_BACKGROUND), new Color (display, 74,144,217)};
		map.put("COLOR_TITLE_BACKGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_TITLE_BACKGROUND_GRADIENT), new Color (display, 133,188,246)};
		map.put("COLOR_TITLE_BACKGROUND_GRADIENT", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_TITLE_INACTIVE_FOREGROUND), new Color (display, 139,142,143)};
		map.put("COLOR_TITLE_INACTIVE_FOREGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_TITLE_INACTIVE_BACKGROUND), new Color (display, 241,241,241)};
		map.put("COLOR_TITLE_INACTIVE_BACKGROUND", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_TITLE_INACTIVE_BACKGROUND_GRADIENT), new Color (display, 255,255,255)};
		map.put("COLOR_TITLE_INACTIVE_BACKGROUND_GRADIENT", colArray);

		colArray = new Color [] {display.getSystemColor(SWT.COLOR_LINK_FOREGROUND), new Color (display, 42,118,198)};
		map.put("COLOR_LINK_FOREGROUND", colArray);

        for (Entry<String, Color[]> entry : map.entrySet()) {
        	String s = entry.getKey();
        	Color gtk = entry.getValue()[1];
        	Color current = entry.getValue()[0];
            TableItem item = new TableItem(table, SWT.NONE);
            item.setText(0, s);
            item.setText(1, "rgb(" + gtk.getRed() + ", " + gtk.getGreen() + ", " + gtk.getBlue() + ")");
            item.setBackground(2, gtk);
            item.setBackground(3, current);
            item.setText(4, "rgba(" + current.getRed() + ", " + current.getGreen() + ", " + current.getBlue() + ", " +
            		current.getAlpha() + ")");
        }

        shell.open();
        while (!shell.isDisposed()) {
            if (!display.readAndDispatch()) display.sleep();
        }
        display.dispose();
	}
}