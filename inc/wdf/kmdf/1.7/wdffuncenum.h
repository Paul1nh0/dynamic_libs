/*++

Module Name: WdfFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _WDFFUNCENUM_H_
#define _WDFFUNCENUM_H_

extern PWDF_DRIVER_GLOBALS WdfDriverGlobals;

typedef enum _WDFFUNCENUM {

    WdfChildListCreateTableIndex = 0,
    WdfChildListGetDeviceTableIndex = 1,
    WdfChildListRetrievePdoTableIndex = 2,
    WdfChildListRetrieveAddressDescriptionTableIndex = 3,
    WdfChildListBeginScanTableIndex = 4,
    WdfChildListEndScanTableIndex = 5,
    WdfChildListBeginIterationTableIndex = 6,
    WdfChildListRetrieveNextDeviceTableIndex = 7,
    WdfChildListEndIterationTableIndex = 8,
    WdfChildListAddOrUpdateChildDescriptionAsPresentTableIndex = 9,
    WdfChildListUpdateChildDescriptionAsMissingTableIndex = 10,
    WdfChildListUpdateAllChildDescriptionsAsPresentTableIndex = 11,
    WdfChildListRequestChildEjectTableIndex = 12,
    WdfCollectionCreateTableIndex = 13,
    WdfCollectionGetCountTableIndex = 14,
    WdfCollectionAddTableIndex = 15,
    WdfCollectionRemoveTableIndex = 16,
    WdfCollectionRemoveItemTableIndex = 17,
    WdfCollectionGetItemTableIndex = 18,
    WdfCollectionGetFirstItemTableIndex = 19,
    WdfCollectionGetLastItemTableIndex = 20,
    WdfCommonBufferCreateTableIndex = 21,
    WdfCommonBufferGetAlignedVirtualAddressTableIndex = 22,
    WdfCommonBufferGetAlignedLogicalAddressTableIndex = 23,
    WdfCommonBufferGetLengthTableIndex = 24,
    WdfControlDeviceInitAllocateTableIndex = 25,
    WdfControlDeviceInitSetShutdownNotificationTableIndex = 26,
    WdfControlFinishInitializingTableIndex = 27,
    WdfDeviceGetDeviceStateTableIndex = 28,
    WdfDeviceSetDeviceStateTableIndex = 29,
    WdfWdmDeviceGetWdfDeviceHandleTableIndex = 30,
    WdfDeviceWdmGetDeviceObjectTableIndex = 31,
    WdfDeviceWdmGetAttachedDeviceTableIndex = 32,
    WdfDeviceWdmGetPhysicalDeviceTableIndex = 33,
    WdfDeviceWdmDispatchPreprocessedIrpTableIndex = 34,
    WdfDeviceAddDependentUsageDeviceObjectTableIndex = 35,
    WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex = 36,
    WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex = 37,
    WdfDeviceClearRemovalRelationsDevicesTableIndex = 38,
    WdfDeviceGetDriverTableIndex = 39,
    WdfDeviceRetrieveDeviceNameTableIndex = 40,
    WdfDeviceAssignMofResourceNameTableIndex = 41,
    WdfDeviceGetIoTargetTableIndex = 42,
    WdfDeviceGetDevicePnpStateTableIndex = 43,
    WdfDeviceGetDevicePowerStateTableIndex = 44,
    WdfDeviceGetDevicePowerPolicyStateTableIndex = 45,
    WdfDeviceAssignS0IdleSettingsTableIndex = 46,
    WdfDeviceAssignSxWakeSettingsTableIndex = 47,
    WdfDeviceOpenRegistryKeyTableIndex = 48,
    WdfDeviceSetSpecialFileSupportTableIndex = 49,
    WdfDeviceSetCharacteristicsTableIndex = 50,
    WdfDeviceGetCharacteristicsTableIndex = 51,
    WdfDeviceGetAlignmentRequirementTableIndex = 52,
    WdfDeviceSetAlignmentRequirementTableIndex = 53,
    WdfDeviceInitFreeTableIndex = 54,
    WdfDeviceInitSetPnpPowerEventCallbacksTableIndex = 55,
    WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex = 56,
    WdfDeviceInitSetPowerPolicyOwnershipTableIndex = 57,
    WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex = 58,
    WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex = 59,
    WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex = 60,
    WdfDeviceInitSetIoTypeTableIndex = 61,
    WdfDeviceInitSetExclusiveTableIndex = 62,
    WdfDeviceInitSetPowerNotPageableTableIndex = 63,
    WdfDeviceInitSetPowerPageableTableIndex = 64,
    WdfDeviceInitSetPowerInrushTableIndex = 65,
    WdfDeviceInitSetDeviceTypeTableIndex = 66,
    WdfDeviceInitAssignNameTableIndex = 67,
    WdfDeviceInitAssignSDDLStringTableIndex = 68,
    WdfDeviceInitSetDeviceClassTableIndex = 69,
    WdfDeviceInitSetCharacteristicsTableIndex = 70,
    WdfDeviceInitSetFileObjectConfigTableIndex = 71,
    WdfDeviceInitSetRequestAttributesTableIndex = 72,
    WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex = 73,
    WdfDeviceInitSetIoInCallerContextCallbackTableIndex = 74,
    WdfDeviceCreateTableIndex = 75,
    WdfDeviceSetStaticStopRemoveTableIndex = 76,
    WdfDeviceCreateDeviceInterfaceTableIndex = 77,
    WdfDeviceSetDeviceInterfaceStateTableIndex = 78,
    WdfDeviceRetrieveDeviceInterfaceStringTableIndex = 79,
    WdfDeviceCreateSymbolicLinkTableIndex = 80,
    WdfDeviceQueryPropertyTableIndex = 81,
    WdfDeviceAllocAndQueryPropertyTableIndex = 82,
    WdfDeviceSetPnpCapabilitiesTableIndex = 83,
    WdfDeviceSetPowerCapabilitiesTableIndex = 84,
    WdfDeviceSetBusInformationForChildrenTableIndex = 85,
    WdfDeviceIndicateWakeStatusTableIndex = 86,
    WdfDeviceSetFailedTableIndex = 87,
    WdfDeviceStopIdleTableIndex = 88,
    WdfDeviceResumeIdleTableIndex = 89,
    WdfDeviceGetFileObjectTableIndex = 90,
    WdfDeviceEnqueueRequestTableIndex = 91,
    WdfDeviceGetDefaultQueueTableIndex = 92,
    WdfDeviceConfigureRequestDispatchingTableIndex = 93,
    WdfDmaEnablerCreateTableIndex = 94,
    WdfDmaEnablerGetMaximumLengthTableIndex = 95,
    WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex = 96,
    WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex = 97,
    WdfDmaTransactionCreateTableIndex = 98,
    WdfDmaTransactionInitializeTableIndex = 99,
    WdfDmaTransactionInitializeUsingRequestTableIndex = 100,
    WdfDmaTransactionExecuteTableIndex = 101,
    WdfDmaTransactionReleaseTableIndex = 102,
    WdfDmaTransactionDmaCompletedTableIndex = 103,
    WdfDmaTransactionDmaCompletedWithLengthTableIndex = 104,
    WdfDmaTransactionDmaCompletedFinalTableIndex = 105,
    WdfDmaTransactionGetBytesTransferredTableIndex = 106,
    WdfDmaTransactionSetMaximumLengthTableIndex = 107,
    WdfDmaTransactionGetRequestTableIndex = 108,
    WdfDmaTransactionGetCurrentDmaTransferLengthTableIndex = 109,
    WdfDmaTransactionGetDeviceTableIndex = 110,
    WdfDpcCreateTableIndex = 111,
    WdfDpcEnqueueTableIndex = 112,
    WdfDpcCancelTableIndex = 113,
    WdfDpcGetParentObjectTableIndex = 114,
    WdfDpcWdmGetDpcTableIndex = 115,
    WdfDriverCreateTableIndex = 116,
    WdfDriverGetRegistryPathTableIndex = 117,
    WdfDriverWdmGetDriverObjectTableIndex = 118,
    WdfDriverOpenParametersRegistryKeyTableIndex = 119,
    WdfWdmDriverGetWdfDriverHandleTableIndex = 120,
    WdfDriverRegisterTraceInfoTableIndex = 121,
    WdfDriverRetrieveVersionStringTableIndex = 122,
    WdfDriverIsVersionAvailableTableIndex = 123,
    WdfFdoInitWdmGetPhysicalDeviceTableIndex = 124,
    WdfFdoInitOpenRegistryKeyTableIndex = 125,
    WdfFdoInitQueryPropertyTableIndex = 126,
    WdfFdoInitAllocAndQueryPropertyTableIndex = 127,
    WdfFdoInitSetEventCallbacksTableIndex = 128,
    WdfFdoInitSetFilterTableIndex = 129,
    WdfFdoInitSetDefaultChildListConfigTableIndex = 130,
    WdfFdoQueryForInterfaceTableIndex = 131,
    WdfFdoGetDefaultChildListTableIndex = 132,
    WdfFdoAddStaticChildTableIndex = 133,
    WdfFdoLockStaticChildListForIterationTableIndex = 134,
    WdfFdoRetrieveNextStaticChildTableIndex = 135,
    WdfFdoUnlockStaticChildListFromIterationTableIndex = 136,
    WdfFileObjectGetFileNameTableIndex = 137,
    WdfFileObjectGetFlagsTableIndex = 138,
    WdfFileObjectGetDeviceTableIndex = 139,
    WdfFileObjectWdmGetFileObjectTableIndex = 140,
    WdfInterruptCreateTableIndex = 141,
    WdfInterruptQueueDpcForIsrTableIndex = 142,
    WdfInterruptSynchronizeTableIndex = 143,
    WdfInterruptAcquireLockTableIndex = 144,
    WdfInterruptReleaseLockTableIndex = 145,
    WdfInterruptEnableTableIndex = 146,
    WdfInterruptDisableTableIndex = 147,
    WdfInterruptWdmGetInterruptTableIndex = 148,
    WdfInterruptGetInfoTableIndex = 149,
    WdfInterruptSetPolicyTableIndex = 150,
    WdfInterruptGetDeviceTableIndex = 151,
    WdfIoQueueCreateTableIndex = 152,
    WdfIoQueueGetStateTableIndex = 153,
    WdfIoQueueStartTableIndex = 154,
    WdfIoQueueStopTableIndex = 155,
    WdfIoQueueStopSynchronouslyTableIndex = 156,
    WdfIoQueueGetDeviceTableIndex = 157,
    WdfIoQueueRetrieveNextRequestTableIndex = 158,
    WdfIoQueueRetrieveRequestByFileObjectTableIndex = 159,
    WdfIoQueueFindRequestTableIndex = 160,
    WdfIoQueueRetrieveFoundRequestTableIndex = 161,
    WdfIoQueueDrainSynchronouslyTableIndex = 162,
    WdfIoQueueDrainTableIndex = 163,
    WdfIoQueuePurgeSynchronouslyTableIndex = 164,
    WdfIoQueuePurgeTableIndex = 165,
    WdfIoQueueReadyNotifyTableIndex = 166,
    WdfIoTargetCreateTableIndex = 167,
    WdfIoTargetOpenTableIndex = 168,
    WdfIoTargetCloseForQueryRemoveTableIndex = 169,
    WdfIoTargetCloseTableIndex = 170,
    WdfIoTargetStartTableIndex = 171,
    WdfIoTargetStopTableIndex = 172,
    WdfIoTargetGetStateTableIndex = 173,
    WdfIoTargetGetDeviceTableIndex = 174,
    WdfIoTargetQueryTargetPropertyTableIndex = 175,
    WdfIoTargetAllocAndQueryTargetPropertyTableIndex = 176,
    WdfIoTargetQueryForInterfaceTableIndex = 177,
    WdfIoTargetWdmGetTargetDeviceObjectTableIndex = 178,
    WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex = 179,
    WdfIoTargetWdmGetTargetFileObjectTableIndex = 180,
    WdfIoTargetWdmGetTargetFileHandleTableIndex = 181,
    WdfIoTargetSendReadSynchronouslyTableIndex = 182,
    WdfIoTargetFormatRequestForReadTableIndex = 183,
    WdfIoTargetSendWriteSynchronouslyTableIndex = 184,
    WdfIoTargetFormatRequestForWriteTableIndex = 185,
    WdfIoTargetSendIoctlSynchronouslyTableIndex = 186,
    WdfIoTargetFormatRequestForIoctlTableIndex = 187,
    WdfIoTargetSendInternalIoctlSynchronouslyTableIndex = 188,
    WdfIoTargetFormatRequestForInternalIoctlTableIndex = 189,
    WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex = 190,
    WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex = 191,
    WdfMemoryCreateTableIndex = 192,
    WdfMemoryCreatePreallocatedTableIndex = 193,
    WdfMemoryGetBufferTableIndex = 194,
    WdfMemoryAssignBufferTableIndex = 195,
    WdfMemoryCopyToBufferTableIndex = 196,
    WdfMemoryCopyFromBufferTableIndex = 197,
    WdfLookasideListCreateTableIndex = 198,
    WdfMemoryCreateFromLookasideTableIndex = 199,
    WdfDeviceMiniportCreateTableIndex = 200,
    WdfDriverMiniportUnloadTableIndex = 201,
    WdfObjectGetTypedContextWorkerTableIndex = 202,
    WdfObjectAllocateContextTableIndex = 203,
    WdfObjectContextGetObjectTableIndex = 204,
    WdfObjectReferenceActualTableIndex = 205,
    WdfObjectDereferenceActualTableIndex = 206,
    WdfObjectCreateTableIndex = 207,
    WdfObjectDeleteTableIndex = 208,
    WdfObjectQueryTableIndex = 209,
    WdfPdoInitAllocateTableIndex = 210,
    WdfPdoInitSetEventCallbacksTableIndex = 211,
    WdfPdoInitAssignDeviceIDTableIndex = 212,
    WdfPdoInitAssignInstanceIDTableIndex = 213,
    WdfPdoInitAddHardwareIDTableIndex = 214,
    WdfPdoInitAddCompatibleIDTableIndex = 215,
    WdfPdoInitAddDeviceTextTableIndex = 216,
    WdfPdoInitSetDefaultLocaleTableIndex = 217,
    WdfPdoInitAssignRawDeviceTableIndex = 218,
    WdfPdoMarkMissingTableIndex = 219,
    WdfPdoRequestEjectTableIndex = 220,
    WdfPdoGetParentTableIndex = 221,
    WdfPdoRetrieveIdentificationDescriptionTableIndex = 222,
    WdfPdoRetrieveAddressDescriptionTableIndex = 223,
    WdfPdoUpdateAddressDescriptionTableIndex = 224,
    WdfPdoAddEjectionRelationsPhysicalDeviceTableIndex = 225,
    WdfPdoRemoveEjectionRelationsPhysicalDeviceTableIndex = 226,
    WdfPdoClearEjectionRelationsDevicesTableIndex = 227,
    WdfDeviceAddQueryInterfaceTableIndex = 228,
    WdfRegistryOpenKeyTableIndex = 229,
    WdfRegistryCreateKeyTableIndex = 230,
    WdfRegistryCloseTableIndex = 231,
    WdfRegistryWdmGetHandleTableIndex = 232,
    WdfRegistryRemoveKeyTableIndex = 233,
    WdfRegistryRemoveValueTableIndex = 234,
    WdfRegistryQueryValueTableIndex = 235,
    WdfRegistryQueryMemoryTableIndex = 236,
    WdfRegistryQueryMultiStringTableIndex = 237,
    WdfRegistryQueryUnicodeStringTableIndex = 238,
    WdfRegistryQueryStringTableIndex = 239,
    WdfRegistryQueryULongTableIndex = 240,
    WdfRegistryAssignValueTableIndex = 241,
    WdfRegistryAssignMemoryTableIndex = 242,
    WdfRegistryAssignMultiStringTableIndex = 243,
    WdfRegistryAssignUnicodeStringTableIndex = 244,
    WdfRegistryAssignStringTableIndex = 245,
    WdfRegistryAssignULongTableIndex = 246,
    WdfRequestCreateTableIndex = 247,
    WdfRequestCreateFromIrpTableIndex = 248,
    WdfRequestReuseTableIndex = 249,
    WdfRequestChangeTargetTableIndex = 250,
    WdfRequestFormatRequestUsingCurrentTypeTableIndex = 251,
    WdfRequestWdmFormatUsingStackLocationTableIndex = 252,
    WdfRequestSendTableIndex = 253,
    WdfRequestGetStatusTableIndex = 254,
    WdfRequestMarkCancelableTableIndex = 255,
    WdfRequestUnmarkCancelableTableIndex = 256,
    WdfRequestIsCanceledTableIndex = 257,
    WdfRequestCancelSentRequestTableIndex = 258,
    WdfRequestIsFrom32BitProcessTableIndex = 259,
    WdfRequestSetCompletionRoutineTableIndex = 260,
    WdfRequestGetCompletionParamsTableIndex = 261,
    WdfRequestAllocateTimerTableIndex = 262,
    WdfRequestCompleteTableIndex = 263,
    WdfRequestCompleteWithPriorityBoostTableIndex = 264,
    WdfRequestCompleteWithInformationTableIndex = 265,
    WdfRequestGetParametersTableIndex = 266,
    WdfRequestRetrieveInputMemoryTableIndex = 267,
    WdfRequestRetrieveOutputMemoryTableIndex = 268,
    WdfRequestRetrieveInputBufferTableIndex = 269,
    WdfRequestRetrieveOutputBufferTableIndex = 270,
    WdfRequestRetrieveInputWdmMdlTableIndex = 271,
    WdfRequestRetrieveOutputWdmMdlTableIndex = 272,
    WdfRequestRetrieveUnsafeUserInputBufferTableIndex = 273,
    WdfRequestRetrieveUnsafeUserOutputBufferTableIndex = 274,
    WdfRequestSetInformationTableIndex = 275,
    WdfRequestGetInformationTableIndex = 276,
    WdfRequestGetFileObjectTableIndex = 277,
    WdfRequestProbeAndLockUserBufferForReadTableIndex = 278,
    WdfRequestProbeAndLockUserBufferForWriteTableIndex = 279,
    WdfRequestGetRequestorModeTableIndex = 280,
    WdfRequestForwardToIoQueueTableIndex = 281,
    WdfRequestGetIoQueueTableIndex = 282,
    WdfRequestRequeueTableIndex = 283,
    WdfRequestStopAcknowledgeTableIndex = 284,
    WdfRequestWdmGetIrpTableIndex = 285,
    WdfIoResourceRequirementsListSetSlotNumberTableIndex = 286,
    WdfIoResourceRequirementsListSetInterfaceTypeTableIndex = 287,
    WdfIoResourceRequirementsListAppendIoResListTableIndex = 288,
    WdfIoResourceRequirementsListInsertIoResListTableIndex = 289,
    WdfIoResourceRequirementsListGetCountTableIndex = 290,
    WdfIoResourceRequirementsListGetIoResListTableIndex = 291,
    WdfIoResourceRequirementsListRemoveTableIndex = 292,
    WdfIoResourceRequirementsListRemoveByIoResListTableIndex = 293,
    WdfIoResourceListCreateTableIndex = 294,
    WdfIoResourceListAppendDescriptorTableIndex = 295,
    WdfIoResourceListInsertDescriptorTableIndex = 296,
    WdfIoResourceListUpdateDescriptorTableIndex = 297,
    WdfIoResourceListGetCountTableIndex = 298,
    WdfIoResourceListGetDescriptorTableIndex = 299,
    WdfIoResourceListRemoveTableIndex = 300,
    WdfIoResourceListRemoveByDescriptorTableIndex = 301,
    WdfCmResourceListAppendDescriptorTableIndex = 302,
    WdfCmResourceListInsertDescriptorTableIndex = 303,
    WdfCmResourceListGetCountTableIndex = 304,
    WdfCmResourceListGetDescriptorTableIndex = 305,
    WdfCmResourceListRemoveTableIndex = 306,
    WdfCmResourceListRemoveByDescriptorTableIndex = 307,
    WdfStringCreateTableIndex = 308,
    WdfStringGetUnicodeStringTableIndex = 309,
    WdfObjectAcquireLockTableIndex = 310,
    WdfObjectReleaseLockTableIndex = 311,
    WdfWaitLockCreateTableIndex = 312,
    WdfWaitLockAcquireTableIndex = 313,
    WdfWaitLockReleaseTableIndex = 314,
    WdfSpinLockCreateTableIndex = 315,
    WdfSpinLockAcquireTableIndex = 316,
    WdfSpinLockReleaseTableIndex = 317,
    WdfTimerCreateTableIndex = 318,
    WdfTimerStartTableIndex = 319,
    WdfTimerStopTableIndex = 320,
    WdfTimerGetParentObjectTableIndex = 321,
    WdfUsbTargetDeviceCreateTableIndex = 322,
    WdfUsbTargetDeviceRetrieveInformationTableIndex = 323,
    WdfUsbTargetDeviceGetDeviceDescriptorTableIndex = 324,
    WdfUsbTargetDeviceRetrieveConfigDescriptorTableIndex = 325,
    WdfUsbTargetDeviceQueryStringTableIndex = 326,
    WdfUsbTargetDeviceAllocAndQueryStringTableIndex = 327,
    WdfUsbTargetDeviceFormatRequestForStringTableIndex = 328,
    WdfUsbTargetDeviceGetNumInterfacesTableIndex = 329,
    WdfUsbTargetDeviceSelectConfigTableIndex = 330,
    WdfUsbTargetDeviceWdmGetConfigurationHandleTableIndex = 331,
    WdfUsbTargetDeviceRetrieveCurrentFrameNumberTableIndex = 332,
    WdfUsbTargetDeviceSendControlTransferSynchronouslyTableIndex = 333,
    WdfUsbTargetDeviceFormatRequestForControlTransferTableIndex = 334,
    WdfUsbTargetDeviceIsConnectedSynchronousTableIndex = 335,
    WdfUsbTargetDeviceResetPortSynchronouslyTableIndex = 336,
    WdfUsbTargetDeviceCyclePortSynchronouslyTableIndex = 337,
    WdfUsbTargetDeviceFormatRequestForCyclePortTableIndex = 338,
    WdfUsbTargetDeviceSendUrbSynchronouslyTableIndex = 339,
    WdfUsbTargetDeviceFormatRequestForUrbTableIndex = 340,
    WdfUsbTargetPipeGetInformationTableIndex = 341,
    WdfUsbTargetPipeIsInEndpointTableIndex = 342,
    WdfUsbTargetPipeIsOutEndpointTableIndex = 343,
    WdfUsbTargetPipeGetTypeTableIndex = 344,
    WdfUsbTargetPipeSetNoMaximumPacketSizeCheckTableIndex = 345,
    WdfUsbTargetPipeWriteSynchronouslyTableIndex = 346,
    WdfUsbTargetPipeFormatRequestForWriteTableIndex = 347,
    WdfUsbTargetPipeReadSynchronouslyTableIndex = 348,
    WdfUsbTargetPipeFormatRequestForReadTableIndex = 349,
    WdfUsbTargetPipeConfigContinuousReaderTableIndex = 350,
    WdfUsbTargetPipeAbortSynchronouslyTableIndex = 351,
    WdfUsbTargetPipeFormatRequestForAbortTableIndex = 352,
    WdfUsbTargetPipeResetSynchronouslyTableIndex = 353,
    WdfUsbTargetPipeFormatRequestForResetTableIndex = 354,
    WdfUsbTargetPipeSendUrbSynchronouslyTableIndex = 355,
    WdfUsbTargetPipeFormatRequestForUrbTableIndex = 356,
    WdfUsbInterfaceGetInterfaceNumberTableIndex = 357,
    WdfUsbInterfaceGetNumEndpointsTableIndex = 358,
    WdfUsbInterfaceGetDescriptorTableIndex = 359,
    WdfUsbInterfaceSelectSettingTableIndex = 360,
    WdfUsbInterfaceGetEndpointInformationTableIndex = 361,
    WdfUsbTargetDeviceGetInterfaceTableIndex = 362,
    WdfUsbInterfaceGetConfiguredSettingIndexTableIndex = 363,
    WdfUsbInterfaceGetNumConfiguredPipesTableIndex = 364,
    WdfUsbInterfaceGetConfiguredPipeTableIndex = 365,
    WdfUsbTargetPipeWdmGetPipeHandleTableIndex = 366,
    WdfVerifierDbgBreakPointTableIndex = 367,
    WdfVerifierKeBugCheckTableIndex = 368,
    WdfWmiProviderCreateTableIndex = 369,
    WdfWmiProviderGetDeviceTableIndex = 370,
    WdfWmiProviderIsEnabledTableIndex = 371,
    WdfWmiProviderGetTracingHandleTableIndex = 372,
    WdfWmiInstanceCreateTableIndex = 373,
    WdfWmiInstanceRegisterTableIndex = 374,
    WdfWmiInstanceDeregisterTableIndex = 375,
    WdfWmiInstanceGetDeviceTableIndex = 376,
    WdfWmiInstanceGetProviderTableIndex = 377,
    WdfWmiInstanceFireEventTableIndex = 378,
    WdfWorkItemCreateTableIndex = 379,
    WdfWorkItemEnqueueTableIndex = 380,
    WdfWorkItemGetParentObjectTableIndex = 381,
    WdfWorkItemFlushTableIndex = 382,
    WdfCommonBufferCreateWithConfigTableIndex = 383,
    WdfDmaEnablerGetFragmentLengthTableIndex = 384,
    WdfDmaEnablerWdmGetDmaAdapterTableIndex = 385,
    WdfUsbInterfaceGetNumSettingsTableIndex = 386,
    WdfFunctionTableNumEntries = 387,
} WDFFUNCENUM;

#endif // _WDFFUNCENUM_H_


