/*******************************************************************************
* Copyright (c) 2000, 2003 IBM Corporation and others.
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Common Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/cpl-v10.html
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

#ifdef NATIVE_STATS
int OS_nativeFunctionCallCount[];
char* OS_nativeFunctionNames[];
#define OS_NATIVE_ENTER(env, that, func) OS_nativeFunctionCallCount[func]++;
#define OS_NATIVE_EXIT(env, that, func) 
#else
#define OS_NATIVE_ENTER(env, that, func) 
#define OS_NATIVE_EXIT(env, that, func) 
#endif

#define AECountItems_FUNC 0
#define AEGetNthPtr_FUNC 1
#define AEProcessAppleEvent_FUNC 2
#define ATSFontGetPostScriptName_FUNC 3
#define ATSUBatchBreakLines_FUNC 4
#define ATSUCreateStyle_FUNC 5
#define ATSUCreateTextLayout_FUNC 6
#define ATSUCreateTextLayoutWithTextPtr_FUNC 7
#define ATSUDisposeStyle_FUNC 8
#define ATSUDisposeTextLayout_FUNC 9
#define ATSUDrawText_FUNC 10
#define ATSUFindFontName_FUNC 11
#define ATSUGetFontIDs_FUNC 12
#define ATSUGetGlyphBounds__IIIIISII_3I_FUNC 13
#define ATSUGetGlyphBounds__IIIIISILorg_eclipse_swt_internal_carbon_ATSTrapezoid_2_3I_FUNC 14
#define ATSUGetLayoutControl_FUNC 15
#define ATSUGetLineControl_FUNC 16
#define ATSUGetSoftLineBreaks_FUNC 17
#define ATSUGetTextHighlight_FUNC 18
#define ATSUGetUnjustifiedBounds_FUNC 19
#define ATSUHighlightText_FUNC 20
#define ATSUNextCursorPosition_FUNC 21
#define ATSUOffsetToPosition_FUNC 22
#define ATSUPositionToOffset_FUNC 23
#define ATSUPreviousCursorPosition_FUNC 24
#define ATSUSetAttributes_FUNC 25
#define ATSUSetFontFeatures_FUNC 26
#define ATSUSetHighlightingMethod_FUNC 27
#define ATSUSetLayoutControls_FUNC 28
#define ATSUSetLineControls_FUNC 29
#define ATSUSetRunStyle_FUNC 30
#define ATSUSetSoftLineBreak_FUNC 31
#define ATSUSetTabArray_FUNC 32
#define ATSUSetTextPointerLocation_FUNC 33
#define ATSUSetTransientFontMatching_FUNC 34
#define ATSUTextDeleted_FUNC 35
#define ATSUTextInserted_FUNC 36
#define ActiveNonFloatingWindow_FUNC 37
#define AddDataBrowserItems_FUNC 38
#define AddDataBrowserListViewColumn_FUNC 39
#define AddDragItemFlavor_FUNC 40
#define AppendMenuItemTextWithCFString_FUNC 41
#define AutoSizeDataBrowserListViewColumns_FUNC 42
#define BeginUpdate_FUNC 43
#define BringToFront_FUNC 44
#define CFArrayAppendValue_FUNC 45
#define CFArrayCreateMutable_FUNC 46
#define CFArrayGetCount_FUNC 47
#define CFArrayGetValueAtIndex_FUNC 48
#define CFRelease_FUNC 49
#define CFStringCreateWithBytes_FUNC 50
#define CFStringCreateWithCharacters_FUNC 51
#define CFStringGetBytes_FUNC 52
#define CFStringGetCharacters_FUNC 53
#define CFStringGetLength_FUNC 54
#define CFStringGetSystemEncoding_FUNC 55
#define CFURLCopyFileSystemPath_FUNC 56
#define CFURLCopyLastPathComponent_FUNC 57
#define CFURLCreateCopyAppendingPathComponent_FUNC 58
#define CFURLCreateCopyDeletingLastPathComponent_FUNC 59
#define CFURLCreateFromFSRef_FUNC 60
#define CFURLCreateWithFileSystemPath_FUNC 61
#define CFURLGetFSRef_FUNC 62
#define CGBitmapContextCreate_FUNC 63
#define CGColorSpaceCreateDeviceRGB_FUNC 64
#define CGColorSpaceRelease_FUNC 65
#define CGContextAddArc_FUNC 66
#define CGContextAddArcToPoint_FUNC 67
#define CGContextAddLineToPoint_FUNC 68
#define CGContextAddLines_FUNC 69
#define CGContextBeginPath_FUNC 70
#define CGContextClearRect_FUNC 71
#define CGContextClip_FUNC 72
#define CGContextClosePath_FUNC 73
#define CGContextDrawImage_FUNC 74
#define CGContextEOFillPath_FUNC 75
#define CGContextFillPath_FUNC 76
#define CGContextFillRect_FUNC 77
#define CGContextFlush_FUNC 78
#define CGContextGetTextPosition_FUNC 79
#define CGContextMoveToPoint_FUNC 80
#define CGContextRelease_FUNC 81
#define CGContextRestoreGState_FUNC 82
#define CGContextSaveGState_FUNC 83
#define CGContextScaleCTM_FUNC 84
#define CGContextSelectFont_FUNC 85
#define CGContextSetFillColor_FUNC 86
#define CGContextSetFillColorSpace_FUNC 87
#define CGContextSetFont_FUNC 88
#define CGContextSetFontSize_FUNC 89
#define CGContextSetLineCap_FUNC 90
#define CGContextSetLineDash_FUNC 91
#define CGContextSetLineWidth_FUNC 92
#define CGContextSetRGBFillColor_FUNC 93
#define CGContextSetRGBStrokeColor_FUNC 94
#define CGContextSetShouldAntialias_FUNC 95
#define CGContextSetShouldSmoothFonts_FUNC 96
#define CGContextSetStrokeColor_FUNC 97
#define CGContextSetStrokeColorSpace_FUNC 98
#define CGContextSetTextDrawingMode_FUNC 99
#define CGContextSetTextMatrix_FUNC 100
#define CGContextSetTextPosition_FUNC 101
#define CGContextShowText_FUNC 102
#define CGContextShowTextAtPoint_FUNC 103
#define CGContextStrokePath_FUNC 104
#define CGContextStrokeRect_FUNC 105
#define CGContextSynchronize_FUNC 106
#define CGContextTranslateCTM_FUNC 107
#define CGDataProviderCreateWithData_FUNC 108
#define CGDataProviderRelease_FUNC 109
#define CGDisplayBaseAddress_FUNC 110
#define CGDisplayBitsPerPixel_FUNC 111
#define CGDisplayBitsPerSample_FUNC 112
#define CGDisplayBytesPerRow_FUNC 113
#define CGDisplayPixelsHigh_FUNC 114
#define CGDisplayPixelsWide_FUNC 115
#define CGFontCreateWithPlatformFont_FUNC 116
#define CGFontRelease_FUNC 117
#define CGGetDisplaysWithRect_FUNC 118
#define CGImageCreate_FUNC 119
#define CGImageGetAlphaInfo_FUNC 120
#define CGImageGetBitsPerComponent_FUNC 121
#define CGImageGetBitsPerPixel_FUNC 122
#define CGImageGetBytesPerRow_FUNC 123
#define CGImageGetColorSpace_FUNC 124
#define CGImageGetHeight_FUNC 125
#define CGImageGetWidth_FUNC 126
#define CGImageRelease_FUNC 127
#define CGPostKeyboardEvent_FUNC 128
#define CGPostMouseEvent_FUNC 129
#define CGWarpMouseCursorPosition_FUNC 130
#define CallNextEventHandler_FUNC 131
#define CharWidth_FUNC 132
#define ClearCurrentScrap_FUNC 133
#define ClearKeyboardFocus_FUNC 134
#define ClearMenuBar_FUNC 135
#define ClipCGContextToRegion_FUNC 136
#define CloseDataBrowserContainer_FUNC 137
#define ClosePoly_FUNC 138
#define CloseRgn_FUNC 139
#define CollapseWindow_FUNC 140
#define ConvertEventRefToEventRecord_FUNC 141
#define ConvertFromPStringToUnicode_FUNC 142
#define ConvertFromUnicodeToPString_FUNC 143
#define CopyBits_FUNC 144
#define CopyControlTitleAsCFString_FUNC 145
#define CopyDeepMask_FUNC 146
#define CopyMenuItemTextAsCFString_FUNC 147
#define CopyRgn_FUNC 148
#define CountDragItemFlavors_FUNC 149
#define CountDragItems_FUNC 150
#define CountMenuItems_FUNC 151
#define CountSubControls_FUNC 152
#define CreateBevelButtonControl_FUNC 153
#define CreateCGContextForPort_FUNC 154
#define CreateCheckBoxControl_FUNC 155
#define CreateDataBrowserControl_FUNC 156
#define CreateEditUnicodeTextControl_FUNC 157
#define CreateEvent_FUNC 158
#define CreateGroupBoxControl_FUNC 159
#define CreateIconControl_FUNC 160
#define CreateNewMenu_FUNC 161
#define CreateNewWindow_FUNC 162
#define CreatePopupArrowControl_FUNC 163
#define CreatePopupButtonControl_FUNC 164
#define CreateProgressBarControl_FUNC 165
#define CreatePushButtonControl_FUNC 166
#define CreatePushButtonWithIconControl_FUNC 167
#define CreateRadioButtonControl_FUNC 168
#define CreateRootControl_FUNC 169
#define CreateScrollBarControl_FUNC 170
#define CreateSeparatorControl_FUNC 171
#define CreateSliderControl_FUNC 172
#define CreateStandardAlert_FUNC 173
#define CreateStaticTextControl_FUNC 174
#define CreateTabsControl_FUNC 175
#define CreateTextToUnicodeInfoByEncoding_FUNC 176
#define CreateUnicodeToTextInfoByEncoding_FUNC 177
#define CreateUserPaneControl_FUNC 178
#define CreateWindowGroup_FUNC 179
#define DMGetFirstScreenDevice_FUNC 180
#define DMGetNextScreenDevice_FUNC 181
#define DeleteMenu_FUNC 182
#define DeleteMenuItem_FUNC 183
#define DeleteMenuItems_FUNC 184
#define DiffRgn_FUNC 185
#define DisableControl_FUNC 186
#define DisableMenuCommand_FUNC 187
#define DisableMenuItem_FUNC 188
#define DisposeControl_FUNC 189
#define DisposeDrag_FUNC 190
#define DisposeGWorld_FUNC 191
#define DisposeHandle_FUNC 192
#define DisposeMenu_FUNC 193
#define DisposePtr_FUNC 194
#define DisposeRgn_FUNC 195
#define DisposeTextToUnicodeInfo_FUNC 196
#define DisposeUnicodeToTextInfo_FUNC 197
#define DisposeWindow_FUNC 198
#define DrawControlInCurrentPort_FUNC 199
#define DrawMenuBar_FUNC 200
#define DrawText_FUNC 201
#define DrawThemeButton_FUNC 202
#define DrawThemeEditTextFrame_FUNC 203
#define DrawThemeFocusRect_FUNC 204
#define DrawThemePopupArrow_FUNC 205
#define DrawThemeSeparator_FUNC 206
#define DrawThemeTextBox_FUNC 207
#define EmbedControl_FUNC 208
#define EmptyRect_FUNC 209
#define EmptyRgn_FUNC 210
#define EnableControl_FUNC 211
#define EnableMenuCommand_FUNC 212
#define EnableMenuItem_FUNC 213
#define EndUpdate_FUNC 214
#define EqualRect_FUNC 215
#define EraseRect_FUNC 216
#define EraseRgn_FUNC 217
#define FMCreateFontFamilyInstanceIterator_FUNC 218
#define FMCreateFontFamilyIterator_FUNC 219
#define FMDisposeFontFamilyInstanceIterator_FUNC 220
#define FMDisposeFontFamilyIterator_FUNC 221
#define FMGetATSFontRefFromFont_FUNC 222
#define FMGetFontFamilyFromName_FUNC 223
#define FMGetFontFamilyInstanceFromFont_FUNC 224
#define FMGetFontFamilyName_FUNC 225
#define FMGetFontFromFontFamilyInstance_FUNC 226
#define FMGetNextFontFamily_FUNC 227
#define FMGetNextFontFamilyInstance_FUNC 228
#define FPIsFontPanelVisible_FUNC 229
#define FPShowHideFontPanel_FUNC 230
#define FSGetCatalogInfo_FUNC 231
#define FSpGetFInfo_FUNC 232
#define FSpMakeFSRef_FUNC 233
#define FetchFontInfo_FUNC 234
#define FindWindow_FUNC 235
#define Fix2Long_FUNC 236
#define FrameOval_FUNC 237
#define FramePoly_FUNC 238
#define FrameRect_FUNC 239
#define FrameRoundRect_FUNC 240
#define FrontWindow_FUNC 241
#define Gestalt_FUNC 242
#define GetAppFont_FUNC 243
#define GetApplicationEventTarget_FUNC 244
#define GetAvailableWindowAttributes_FUNC 245
#define GetAvailableWindowPositioningBounds_FUNC 246
#define GetBestControlRect_FUNC 247
#define GetCaretTime_FUNC 248
#define GetClip_FUNC 249
#define GetControl32BitMaximum_FUNC 250
#define GetControl32BitMinimum_FUNC 251
#define GetControl32BitValue_FUNC 252
#define GetControlBounds_FUNC 253
#define GetControlData__ISIILorg_eclipse_swt_internal_carbon_ControlFontStyleRec_2_3I_FUNC 254
#define GetControlData__ISIILorg_eclipse_swt_internal_carbon_Rect_2_3I_FUNC 255
#define GetControlData__ISII_3B_3I_FUNC 256
#define GetControlData__ISII_3I_3I_FUNC 257
#define GetControlData__ISII_3S_3I_FUNC 258
#define GetControlEventTarget_FUNC 259
#define GetControlFeatures_FUNC 260
#define GetControlOwner_FUNC 261
#define GetControlProperty_FUNC 262
#define GetControlReference_FUNC 263
#define GetControlRegion_FUNC 264
#define GetControlValue_FUNC 265
#define GetControlViewSize_FUNC 266
#define GetCurrentEventButtonState_FUNC 267
#define GetCurrentEventKeyModifiers_FUNC 268
#define GetCurrentEventLoop_FUNC 269
#define GetCurrentEventQueue_FUNC 270
#define GetCurrentProcess_FUNC 271
#define GetCurrentScrap_FUNC 272
#define GetDataBrowserCallbacks_FUNC 273
#define GetDataBrowserItemCount_FUNC 274
#define GetDataBrowserItemDataButtonValue_FUNC 275
#define GetDataBrowserItemPartBounds_FUNC 276
#define GetDataBrowserItemState_FUNC 277
#define GetDataBrowserItems_FUNC 278
#define GetDataBrowserListViewHeaderBtnHeight_FUNC 279
#define GetDataBrowserListViewHeaderDesc_FUNC 280
#define GetDataBrowserScrollBarInset_FUNC 281
#define GetDataBrowserScrollPosition_FUNC 282
#define GetDataBrowserSelectionAnchor_FUNC 283
#define GetDataBrowserSelectionFlags_FUNC 284
#define GetDataBrowserSortProperty_FUNC 285
#define GetDataBrowserTableViewColumnPosition_FUNC 286
#define GetDataBrowserTableViewItemID_FUNC 287
#define GetDataBrowserTableViewItemRow_FUNC 288
#define GetDataBrowserTableViewNamedColumnWidth_FUNC 289
#define GetDataBrowserTableViewRowHeight_FUNC 290
#define GetDblTime_FUNC 291
#define GetDefFontSize_FUNC 292
#define GetDeviceList_FUNC 293
#define GetDragAllowableActions_FUNC 294
#define GetDragDropAction_FUNC 295
#define GetDragItemReferenceNumber_FUNC 296
#define GetDragModifiers_FUNC 297
#define GetDragMouse_FUNC 298
#define GetEventClass_FUNC 299
#define GetEventDispatcherTarget_FUNC 300
#define GetEventKind_FUNC 301
#define GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_CGPoint_2_FUNC 302
#define GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_HICommand_2_FUNC 303
#define GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_Point_2_FUNC 304
#define GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_RGBColor_2_FUNC 305
#define GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_Rect_2_FUNC 306
#define GetEventParameter__III_3II_3I_3B_FUNC 307
#define GetEventParameter__III_3II_3I_3C_FUNC 308
#define GetEventParameter__III_3II_3I_3I_FUNC 309
#define GetEventParameter__III_3II_3I_3S_FUNC 310
#define GetEventTime_FUNC 311
#define GetFlavorData_FUNC 312
#define GetFlavorDataSize_FUNC 313
#define GetFlavorType_FUNC 314
#define GetFontInfo_FUNC 315
#define GetGDevice_FUNC 316
#define GetGWorld_FUNC 317
#define GetGlobalMouse_FUNC 318
#define GetHandleSize_FUNC 319
#define GetIconFamilyData_FUNC 320
#define GetIconRef_FUNC 321
#define GetIndMenuItemWithCommandID_FUNC 322
#define GetIndexedSubControl_FUNC 323
#define GetItemMark_FUNC 324
#define GetKeyboardFocus_FUNC 325
#define GetLastUserEventTime_FUNC 326
#define GetMBarHeight_FUNC 327
#define GetMainDevice_FUNC 328
#define GetMainEventQueue_FUNC 329
#define GetMenuCommandMark_FUNC 330
#define GetMenuEventTarget_FUNC 331
#define GetMenuFont_FUNC 332
#define GetMenuHeight_FUNC 333
#define GetMenuID_FUNC 334
#define GetMenuItemCommandID_FUNC 335
#define GetMenuItemHierarchicalMenu_FUNC 336
#define GetMenuItemRefCon_FUNC 337
#define GetMenuTrackingData_FUNC 338
#define GetMenuWidth_FUNC 339
#define GetMouse_FUNC 340
#define GetNextDevice_FUNC 341
#define GetPixBounds_FUNC 342
#define GetPixDepth_FUNC 343
#define GetPort_FUNC 344
#define GetPortBitMapForCopyBits_FUNC 345
#define GetPortBounds_FUNC 346
#define GetPortClipRegion_FUNC 347
#define GetPortVisibleRegion_FUNC 348
#define GetPtrSize_FUNC 349
#define GetRegionBounds_FUNC 350
#define GetRootControl_FUNC 351
#define GetScrapFlavorCount_FUNC 352
#define GetScrapFlavorData_FUNC 353
#define GetScrapFlavorInfoList_FUNC 354
#define GetScrapFlavorSize_FUNC 355
#define GetScriptManagerVariable_FUNC 356
#define GetSuperControl_FUNC 357
#define GetTabContentRect_FUNC 358
#define GetThemeBrushAsColor_FUNC 359
#define GetThemeButtonContentBounds_FUNC 360
#define GetThemeDrawingState_FUNC 361
#define GetThemeFont_FUNC 362
#define GetThemeMenuItemExtra_FUNC 363
#define GetThemeMetric_FUNC 364
#define GetThemeTextColor_FUNC 365
#define GetThemeTextDimensions_FUNC 366
#define GetUserFocusEventTarget_FUNC 367
#define GetUserFocusWindow_FUNC 368
#define GetWRefCon_FUNC 369
#define GetWindowActivationScope_FUNC 370
#define GetWindowBounds_FUNC 371
#define GetWindowDefaultButton_FUNC 372
#define GetWindowEventTarget_FUNC 373
#define GetWindowFromPort_FUNC 374
#define GetWindowGroupOfClass_FUNC 375
#define GetWindowModality_FUNC 376
#define GetWindowPort_FUNC 377
#define GetWindowRegion_FUNC 378
#define GetWindowStructureWidths_FUNC 379
#define HIComboBoxAppendTextItem_FUNC 380
#define HIComboBoxCopyTextItemAtIndex_FUNC 381
#define HIComboBoxCreate_FUNC 382
#define HIComboBoxGetItemCount_FUNC 383
#define HIComboBoxInsertTextItemAtIndex_FUNC 384
#define HIComboBoxRemoveItemAtIndex_FUNC 385
#define HIObjectCopyClassID_FUNC 386
#define HIObjectCreate_FUNC 387
#define HIObjectRegisterSubclass_FUNC 388
#define HIViewAddSubview_FUNC 389
#define HIViewClick_FUNC 390
#define HIViewConvertPoint_FUNC 391
#define HIViewCreateOffscreenImage_FUNC 392
#define HIViewFindByID_FUNC 393
#define HIViewGetFirstSubview_FUNC 394
#define HIViewGetFrame_FUNC 395
#define HIViewGetLastSubview_FUNC 396
#define HIViewGetNextView_FUNC 397
#define HIViewGetRoot_FUNC 398
#define HIViewGetSizeConstraints_FUNC 399
#define HIViewGetSubviewHit_FUNC 400
#define HIViewGetViewForMouseEvent_FUNC 401
#define HIViewIsVisible_FUNC 402
#define HIViewRemoveFromSuperview_FUNC 403
#define HIViewSetBoundsOrigin_FUNC 404
#define HIViewSetDrawingEnabled_FUNC 405
#define HIViewSetFrame_FUNC 406
#define HIViewSetNeedsDisplay_FUNC 407
#define HIViewSetNeedsDisplayInRegion_FUNC 408
#define HIViewSetVisible_FUNC 409
#define HIViewSetZOrder_FUNC 410
#define HIViewSimulateClick_FUNC 411
#define HLock_FUNC 412
#define HMGetTagDelay_FUNC 413
#define HMHideTag_FUNC 414
#define HMInstallControlContentCallback_FUNC 415
#define HMSetTagDelay_FUNC 416
#define HUnlock_FUNC 417
#define HandleControlClick_FUNC 418
#define HandleControlSetCursor_FUNC 419
#define HiWord_FUNC 420
#define HideWindow_FUNC 421
#define HiliteMenu_FUNC 422
#define IconRefToIconFamily_FUNC 423
#define InitContextualMenus_FUNC 424
#define InitCursor_FUNC 425
#define InitDataBrowserCallbacks_FUNC 426
#define InitDataBrowserCustomCallbacks_FUNC 427
#define InsertMenu_FUNC 428
#define InsertMenuItemTextWithCFString_FUNC 429
#define InstallEventHandler_FUNC 430
#define InstallEventLoopTimer_FUNC 431
#define InstallReceiveHandler_FUNC 432
#define InstallTrackingHandler_FUNC 433
#define InvalWindowRect_FUNC 434
#define InvalWindowRgn_FUNC 435
#define InvertRect_FUNC 436
#define InvertRgn_FUNC 437
#define IsControlActive_FUNC 438
#define IsControlEnabled_FUNC 439
#define IsControlVisible_FUNC 440
#define IsDataBrowserItemSelected_FUNC 441
#define IsMenuCommandEnabled_FUNC 442
#define IsMenuItemEnabled_FUNC 443
#define IsValidControlHandle_FUNC 444
#define IsValidMenu_FUNC 445
#define IsValidWindowPtr_FUNC 446
#define IsWindowActive_FUNC 447
#define IsWindowCollapsed_FUNC 448
#define IsWindowVisible_FUNC 449
#define KeyTranslate_FUNC 450
#define KillPoly_FUNC 451
#define LineTo_FUNC 452
#define LoWord_FUNC 453
#define LockPortBits_FUNC 454
#define Long2Fix_FUNC 455
#define MenuSelect_FUNC 456
#define MoveControl_FUNC 457
#define MoveTo_FUNC 458
#define MoveWindow_FUNC 459
#define NavCreateChooseFolderDialog_FUNC 460
#define NavCreateGetFileDialog_FUNC 461
#define NavCreatePutFileDialog_FUNC 462
#define NavDialogDispose_FUNC 463
#define NavDialogGetReply_FUNC 464
#define NavDialogGetSaveFileName_FUNC 465
#define NavDialogGetUserAction_FUNC 466
#define NavDialogRun_FUNC 467
#define NavDialogSetSaveFileName_FUNC 468
#define NavGetDefaultDialogCreationOptions_FUNC 469
#define NewControl_FUNC 470
#define NewDrag_FUNC 471
#define NewGWorldFromPtr_FUNC 472
#define NewHandle_FUNC 473
#define NewHandleClear_FUNC 474
#define NewPtr_FUNC 475
#define NewPtrClear_FUNC 476
#define NewRgn_FUNC 477
#define OffsetRect_FUNC 478
#define OffsetRgn_FUNC 479
#define OpenDataBrowserContainer_FUNC 480
#define OpenPoly_FUNC 481
#define OpenRgn_FUNC 482
#define PMCreatePageFormat_FUNC 483
#define PMCreatePrintSettings_FUNC 484
#define PMCreateSession_FUNC 485
#define PMFlattenPageFormat_FUNC 486
#define PMFlattenPrintSettings_FUNC 487
#define PMGetAdjustedPageRect_FUNC 488
#define PMGetAdjustedPaperRect_FUNC 489
#define PMGetCollate_FUNC 490
#define PMGetCopies_FUNC 491
#define PMGetFirstPage_FUNC 492
#define PMGetJobNameCFString_FUNC 493
#define PMGetLastPage_FUNC 494
#define PMGetPageRange_FUNC 495
#define PMGetResolution_FUNC 496
#define PMRelease_FUNC 497
#define PMSessionBeginDocumentNoDialog_FUNC 498
#define PMSessionBeginPageNoDialog_FUNC 499
#define PMSessionCopyDestinationLocation_FUNC 500
#define PMSessionCreatePrinterList_FUNC 501
#define PMSessionDefaultPageFormat_FUNC 502
#define PMSessionDefaultPrintSettings_FUNC 503
#define PMSessionEndDocumentNoDialog_FUNC 504
#define PMSessionEndPageNoDialog_FUNC 505
#define PMSessionError_FUNC 506
#define PMSessionGetDestinationType_FUNC 507
#define PMSessionGetGraphicsContext_FUNC 508
#define PMSessionPageSetupDialog_FUNC 509
#define PMSessionPrintDialog_FUNC 510
#define PMSessionSetCurrentPrinter_FUNC 511
#define PMSessionSetDestination_FUNC 512
#define PMSessionSetDocumentFormatGeneration_FUNC 513
#define PMSessionSetError_FUNC 514
#define PMSessionUseSheets_FUNC 515
#define PMSessionValidatePageFormat_FUNC 516
#define PMSessionValidatePrintSettings_FUNC 517
#define PMSetCollate_FUNC 518
#define PMSetFirstPage_FUNC 519
#define PMSetJobNameCFString_FUNC 520
#define PMSetLastPage_FUNC 521
#define PMSetPageRange_FUNC 522
#define PMUnflattenPageFormat_FUNC 523
#define PMUnflattenPrintSettings_FUNC 524
#define PaintOval_FUNC 525
#define PaintPoly_FUNC 526
#define PaintRect_FUNC 527
#define PaintRoundRect_FUNC 528
#define PenSize_FUNC 529
#define PickColor_FUNC 530
#define PopUpMenuSelect_FUNC 531
#define PostEvent_FUNC 532
#define PostEventToQueue_FUNC 533
#define PtInRect_FUNC 534
#define PtInRgn_FUNC 535
#define PutScrapFlavor_FUNC 536
#define QDBeginCGContext_FUNC 537
#define QDEndCGContext_FUNC 538
#define QDFlushPortBuffer_FUNC 539
#define QDGlobalToLocalPoint_FUNC 540
#define QDLocalToGlobalPoint_FUNC 541
#define QDSetDirtyRegion_FUNC 542
#define QDSetPatternOrigin_FUNC 543
#define QDSwapTextFlags_FUNC 544
#define RGBBackColor_FUNC 545
#define RGBForeColor_FUNC 546
#define ReceiveNextEvent_FUNC 547
#define RectInRgn_FUNC 548
#define RectRgn_FUNC 549
#define RegisterAppearanceClient_FUNC 550
#define ReleaseEvent_FUNC 551
#define ReleaseIconRef_FUNC 552
#define ReleaseMenu_FUNC 553
#define ReleaseWindow_FUNC 554
#define ReleaseWindowGroup_FUNC 555
#define RemoveControlProperty_FUNC 556
#define RemoveDataBrowserItems_FUNC 557
#define RemoveDataBrowserTableViewColumn_FUNC 558
#define RemoveEventHandler_FUNC 559
#define RemoveEventLoopTimer_FUNC 560
#define RemoveReceiveHandler_FUNC 561
#define RemoveTrackingHandler_FUNC 562
#define RepositionWindow_FUNC 563
#define ReshapeCustomWindow_FUNC 564
#define RetainEvent_FUNC 565
#define RetainMenu_FUNC 566
#define RetainWindow_FUNC 567
#define RevealDataBrowserItem_FUNC 568
#define RunStandardAlert_FUNC 569
#define ScrollRect_FUNC 570
#define SectRect_FUNC 571
#define SectRgn_FUNC 572
#define SelectWindow_FUNC 573
#define SendBehind_FUNC 574
#define SendEventToEventTarget_FUNC 575
#define SetBevelButtonContentInfo_FUNC 576
#define SetClip_FUNC 577
#define SetControl32BitMaximum_FUNC 578
#define SetControl32BitMinimum_FUNC 579
#define SetControl32BitValue_FUNC 580
#define SetControlAction_FUNC 581
#define SetControlBounds_FUNC 582
#define SetControlColorProc_FUNC 583
#define SetControlData__IIIII_FUNC 584
#define SetControlData__IIIILorg_eclipse_swt_internal_carbon_ControlButtonContentInfo_2_FUNC 585
#define SetControlData__IIIILorg_eclipse_swt_internal_carbon_ControlTabInfoRecV1_2_FUNC 586
#define SetControlData__IIIILorg_eclipse_swt_internal_carbon_Rect_2_FUNC 587
#define SetControlData__IIII_3B_FUNC 588
#define SetControlData__IIII_3I_FUNC 589
#define SetControlData__IIII_3S_FUNC 590
#define SetControlFontStyle_FUNC 591
#define SetControlPopupMenuHandle_FUNC 592
#define SetControlProperty_FUNC 593
#define SetControlReference_FUNC 594
#define SetControlTitleWithCFString_FUNC 595
#define SetControlViewSize_FUNC 596
#define SetControlVisibility_FUNC 597
#define SetCursor_FUNC 598
#define SetDataBrowserCallbacks_FUNC 599
#define SetDataBrowserCustomCallbacks_FUNC 600
#define SetDataBrowserHasScrollBars_FUNC 601
#define SetDataBrowserItemDataBooleanValue_FUNC 602
#define SetDataBrowserItemDataButtonValue_FUNC 603
#define SetDataBrowserItemDataIcon_FUNC 604
#define SetDataBrowserItemDataItemID_FUNC 605
#define SetDataBrowserItemDataText_FUNC 606
#define SetDataBrowserListViewDisclosureColumn_FUNC 607
#define SetDataBrowserListViewHeaderBtnHeight_FUNC 608
#define SetDataBrowserListViewHeaderDesc_FUNC 609
#define SetDataBrowserScrollPosition_FUNC 610
#define SetDataBrowserSelectedItems_FUNC 611
#define SetDataBrowserSelectionFlags_FUNC 612
#define SetDataBrowserSortOrder_FUNC 613
#define SetDataBrowserTableViewColumnPosition_FUNC 614
#define SetDataBrowserTableViewHiliteStyle_FUNC 615
#define SetDataBrowserTableViewItemRow_FUNC 616
#define SetDataBrowserTableViewNamedColumnWidth_FUNC 617
#define SetDataBrowserTarget_FUNC 618
#define SetDragAllowableActions_FUNC 619
#define SetDragDropAction_FUNC 620
#define SetDragInputProc_FUNC 621
#define SetEventLoopTimerNextFireTime_FUNC 622
#define SetEventParameter__IIII_3C_FUNC 623
#define SetEventParameter__IIII_3S_FUNC 624
#define SetFontInfoForSelection_FUNC 625
#define SetFrontProcess_FUNC 626
#define SetFrontProcessWithOptions_FUNC 627
#define SetGWorld_FUNC 628
#define SetItemMark_FUNC 629
#define SetKeyboardFocus_FUNC 630
#define SetMenuCommandMark_FUNC 631
#define SetMenuFont_FUNC 632
#define SetMenuItemCommandKey_FUNC 633
#define SetMenuItemHierarchicalMenu_FUNC 634
#define SetMenuItemIconHandle_FUNC 635
#define SetMenuItemKeyGlyph_FUNC 636
#define SetMenuItemModifiers_FUNC 637
#define SetMenuItemRefCon_FUNC 638
#define SetMenuItemTextWithCFString_FUNC 639
#define SetMenuTitleWithCFString_FUNC 640
#define SetOrigin_FUNC 641
#define SetPort_FUNC 642
#define SetPortBounds_FUNC 643
#define SetPortWindowPort_FUNC 644
#define SetPt_FUNC 645
#define SetRect_FUNC 646
#define SetRectRgn_FUNC 647
#define SetRootMenu_FUNC 648
#define SetThemeBackground_FUNC 649
#define SetThemeCursor_FUNC 650
#define SetThemeDrawingState_FUNC 651
#define SetThemeTextColor_FUNC 652
#define SetThemeWindowBackground_FUNC 653
#define SetUpControlBackground_FUNC 654
#define SetWRefCon_FUNC 655
#define SetWindowActivationScope_FUNC 656
#define SetWindowBounds_FUNC 657
#define SetWindowDefaultButton_FUNC 658
#define SetWindowGroup_FUNC 659
#define SetWindowGroupOwner_FUNC 660
#define SetWindowGroupParent_FUNC 661
#define SetWindowModality_FUNC 662
#define SetWindowTitleWithCFString_FUNC 663
#define ShowWindow_FUNC 664
#define SizeControl_FUNC 665
#define SizeWindow_FUNC 666
#define StillDown_FUNC 667
#define SyncCGContextOriginWithPort_FUNC 668
#define SysBeep_FUNC 669
#define TXNActivate_FUNC 670
#define TXNAdjustCursor_FUNC 671
#define TXNClick_FUNC 672
#define TXNCopy_FUNC 673
#define TXNCut_FUNC 674
#define TXNDataSize_FUNC 675
#define TXNDeleteObject_FUNC 676
#define TXNDraw_FUNC 677
#define TXNEchoMode_FUNC 678
#define TXNFocus_FUNC 679
#define TXNGetData_FUNC 680
#define TXNGetLineCount_FUNC 681
#define TXNGetLineMetrics_FUNC 682
#define TXNGetRectBounds_FUNC 683
#define TXNGetSelection_FUNC 684
#define TXNGetTXNObjectControls_FUNC 685
#define TXNGetViewRect_FUNC 686
#define TXNInitTextension_FUNC 687
#define TXNNewObject_FUNC 688
#define TXNOffsetToPoint_FUNC 689
#define TXNPaste_FUNC 690
#define TXNPointToOffset_FUNC 691
#define TXNSelectAll_FUNC 692
#define TXNSetBackground_FUNC 693
#define TXNSetData_FUNC 694
#define TXNSetFrameBounds_FUNC 695
#define TXNSetRectBounds_FUNC 696
#define TXNSetSelection_FUNC 697
#define TXNSetTXNObjectControls_FUNC 698
#define TXNSetTypeAttributes_FUNC 699
#define TXNShowSelection_FUNC 700
#define TestControl_FUNC 701
#define TextFace_FUNC 702
#define TextFont_FUNC 703
#define TextMode_FUNC 704
#define TextSize_FUNC 705
#define TextWidth_FUNC 706
#define TrackDrag_FUNC 707
#define TrackMouseLocationWithOptions_FUNC 708
#define UnionRect_FUNC 709
#define UnionRgn_FUNC 710
#define UnlockPortBits_FUNC 711
#define UpdateControls_FUNC 712
#define UpdateDataBrowserItems_FUNC 713
#define UpgradeScriptInfoToTextEncoding_FUNC 714
#define WaitMouseMoved_FUNC 715
#define X2Fix_FUNC 716
#define ZoomWindowIdeal_FUNC 717
#define kHIViewWindowContentID_FUNC 718
#define kPMDocumentFormatPDF_FUNC 719
#define kPMGraphicsContextCoreGraphics_FUNC 720
#define memcpy__III_FUNC 721
#define memcpy__ILorg_eclipse_swt_internal_carbon_ATSUTab_2I_FUNC 722
#define memcpy__ILorg_eclipse_swt_internal_carbon_BitMap_2I_FUNC 723
#define memcpy__ILorg_eclipse_swt_internal_carbon_Cursor_2I_FUNC 724
#define memcpy__ILorg_eclipse_swt_internal_carbon_EventRecord_2I_FUNC 725
#define memcpy__ILorg_eclipse_swt_internal_carbon_FontSelectionQDStyle_2I_FUNC 726
#define memcpy__ILorg_eclipse_swt_internal_carbon_HMHelpContentRec_2I_FUNC 727
#define memcpy__ILorg_eclipse_swt_internal_carbon_PixMap_2I_FUNC 728
#define memcpy__ILorg_eclipse_swt_internal_carbon_RGBColor_2I_FUNC 729
#define memcpy__ILorg_eclipse_swt_internal_carbon_Rect_2I_FUNC 730
#define memcpy__I_3BI_FUNC 731
#define memcpy__I_3CI_FUNC 732
#define memcpy__I_3II_FUNC 733
#define memcpy__Lorg_eclipse_swt_internal_carbon_ATSTrapezoid_2II_FUNC 734
#define memcpy__Lorg_eclipse_swt_internal_carbon_FontSelectionQDStyle_2II_FUNC 735
#define memcpy__Lorg_eclipse_swt_internal_carbon_GDevice_2II_FUNC 736
#define memcpy__Lorg_eclipse_swt_internal_carbon_HMHelpContentRec_2II_FUNC 737
#define memcpy__Lorg_eclipse_swt_internal_carbon_PixMap_2II_FUNC 738
#define memcpy__Lorg_eclipse_swt_internal_carbon_Rect_2II_FUNC 739
#define memcpy___3BII_FUNC 740
#define memcpy___3B_3CI_FUNC 741
#define memcpy___3CII_FUNC 742
#define memcpy___3C_3BI_FUNC 743
#define memcpy___3FII_FUNC 744
#define memcpy___3III_FUNC 745
#define memset_FUNC 746
