/*******************************************************************************
 * Copyright (c) 2000, 2021 IBM Corporation and others.
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Note: This file was auto-generated by org.eclipse.swt.tools.internal.JNIGenerator */
/* DO NOT EDIT - your changes will be lost. */

#include "swt.h"
#include "gtk4_stats.h"

#ifdef NATIVE_STATS

char * GTK4_nativeFunctionNames[] = {
	"gdk_1content_1formats_1builder_1add_1mime_1type",
	"gdk_1content_1formats_1builder_1free_1to_1formats",
	"gdk_1content_1formats_1builder_1new",
	"gdk_1toplevel_1focus",
	"gdk_1toplevel_1get_1state",
	"gdk_1toplevel_1lower",
	"gdk_1toplevel_1set_1icon_1list",
	"gtk_1box_1append",
	"gtk_1box_1insert_1child_1after",
	"gtk_1box_1prepend",
	"gtk_1button_1new_1from_1icon_1name",
	"gtk_1button_1set_1child",
	"gtk_1calendar_1get_1date",
	"gtk_1calendar_1select_1day",
	"gtk_1calendar_1set_1show_1day_1names",
	"gtk_1calendar_1set_1show_1heading",
	"gtk_1calendar_1set_1show_1week_1numbers",
	"gtk_1check_1button_1get_1active",
	"gtk_1check_1button_1set_1active",
	"gtk_1check_1button_1set_1group",
	"gtk_1check_1button_1set_1inconsistent",
	"gtk_1check_1button_1set_1use_1underline",
	"gtk_1combo_1box_1get_1child",
	"gtk_1css_1provider_1load_1from_1data",
	"gtk_1drag_1source_1new",
	"gtk_1drag_1source_1set_1actions",
	"gtk_1drag_1source_1set_1icon",
	"gtk_1drop_1target_1async_1new",
	"gtk_1drop_1target_1async_1set_1formats",
	"gtk_1entry_1get_1buffer",
	"gtk_1entry_1set_1buffer",
	"gtk_1event_1controller_1focus_1new",
	"gtk_1event_1controller_1get_1current_1event",
	"gtk_1event_1controller_1key_1new",
	"gtk_1event_1controller_1motion_1new",
	"gtk_1event_1controller_1scroll_1new",
	"gtk_1expander_1set_1child",
	"gtk_1file_1chooser_1get_1file",
	"gtk_1file_1chooser_1get_1files",
	"gtk_1file_1chooser_1set_1current_1folder",
	"gtk_1file_1chooser_1set_1file",
	"gtk_1frame_1set_1child",
	"gtk_1gesture_1click_1new",
	"gtk_1hsv_1to_1rgb",
	"gtk_1icon_1paintable_1get_1file",
	"gtk_1icon_1theme_1get_1for_1display",
	"gtk_1icon_1theme_1lookup_1by_1gicon",
	"gtk_1icon_1theme_1lookup_1icon",
	"gtk_1im_1context_1filter_1keypress",
	"gtk_1image_1clear",
	"gtk_1image_1new_1from_1icon_1name",
	"gtk_1image_1set_1from_1paintable",
	"gtk_1init_1check",
	"gtk_1keyval_1trigger_1new",
	"gtk_1label_1set_1wrap",
	"gtk_1label_1set_1wrap_1mode",
	"gtk_1menu_1button_1set_1use_1underline",
	"gtk_1named_1action_1new",
	"gtk_1native_1get_1surface",
	"gtk_1picture_1new",
	"gtk_1picture_1set_1can_1shrink",
	"gtk_1picture_1set_1paintable",
	"gtk_1popover_1menu_1bar_1new_1from_1model",
	"gtk_1popover_1menu_1new_1from_1model_1full",
	"gtk_1popover_1menu_1set_1menu_1model",
	"gtk_1popover_1set_1has_1arrow",
	"gtk_1rgb_1to_1hsv",
	"gtk_1scrollbar_1get_1adjustment",
	"gtk_1scrolled_1window_1get_1has_1frame",
	"gtk_1scrolled_1window_1new",
	"gtk_1scrolled_1window_1set_1child",
	"gtk_1scrolled_1window_1set_1has_1frame",
	"gtk_1shortcut_1controller_1add_1shortcut",
	"gtk_1shortcut_1controller_1new",
	"gtk_1shortcut_1controller_1remove_1shortcut",
	"gtk_1shortcut_1controller_1set_1scope",
	"gtk_1shortcut_1new",
	"gtk_1snapshot_1append_1cairo",
	"gtk_1style_1context_1add_1provider_1for_1display",
	"gtk_1text_1get_1buffer",
	"gtk_1widget_1action_1set_1enabled",
	"gtk_1widget_1activate_1action",
	"gtk_1widget_1add_1controller",
	"gtk_1widget_1class_1add_1binding_1signal",
	"gtk_1widget_1get_1first_1child",
	"gtk_1widget_1get_1last_1child",
	"gtk_1widget_1get_1native",
	"gtk_1widget_1get_1next_1sibling",
	"gtk_1widget_1get_1prev_1sibling",
	"gtk_1widget_1get_1receives_1default",
	"gtk_1widget_1get_1root",
	"gtk_1widget_1measure",
	"gtk_1widget_1set_1cursor",
	"gtk_1widget_1snapshot_1child",
	"gtk_1widget_1translate_1coordinates",
	"gtk_1window_1destroy",
	"gtk_1window_1get_1icon_1name",
	"gtk_1window_1minimize",
	"gtk_1window_1new",
	"gtk_1window_1set_1child",
	"gtk_1window_1set_1default_1widget",
	"gtk_1window_1set_1icon_1name",
	"gtk_1window_1unminimize",
};
#define NATIVE_FUNCTION_COUNT sizeof(GTK4_nativeFunctionNames) / sizeof(char*)
int GTK4_nativeFunctionCount = NATIVE_FUNCTION_COUNT;
int GTK4_nativeFunctionCallCount[NATIVE_FUNCTION_COUNT];

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(GTK4_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return GTK4_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(GTK4_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, GTK4_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(GTK4_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return GTK4_nativeFunctionCallCount[index];
}

#endif
