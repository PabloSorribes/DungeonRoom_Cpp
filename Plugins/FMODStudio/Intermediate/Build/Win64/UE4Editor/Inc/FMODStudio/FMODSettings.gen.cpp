// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FMODSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSettings() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EFMODSpeakerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODSpeakerMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODSpeakerMode(EFMODSpeakerMode_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODSpeakerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_CRC() { return 3856907531U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODSpeakerMode"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODSpeakerMode::Stereo", (int64)EFMODSpeakerMode::Stereo },
				{ "EFMODSpeakerMode::Surround_5_1", (int64)EFMODSpeakerMode::Surround_5_1 },
				{ "EFMODSpeakerMode::Surround_7_1", (int64)EFMODSpeakerMode::Surround_7_1 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "Stereo.ToolTip", "The speakers are stereo" },
				{ "Surround_5_1.ToolTip", "5.1 speaker setup" },
				{ "Surround_7_1.ToolTip", "7.1 speaker setup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFMODSpeakerMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EFMODSpeakerMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCustomPoolSizes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPoolSizes, Z_Construct_UPackage__Script_FMODStudio(), TEXT("CustomPoolSizes"), sizeof(FCustomPoolSizes), Get_Z_Construct_UScriptStruct_FCustomPoolSizes_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomPoolSizes(FCustomPoolSizes::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("CustomPoolSizes"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomPoolSizes")),new UScriptStruct::TCppStructOps<FCustomPoolSizes>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes;
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomPoolSizes"), sizeof(FCustomPoolSizes), Get_Z_Construct_UScriptStruct_FCustomPoolSizes_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPoolSizes>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxOne_MetaData[] = {
				{ "Category", "CustomPoolSizes" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_XboxOne = { UE4CodeGen_Private::EPropertyClass::Int, "XboxOne", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FCustomPoolSizes, XboxOne), METADATA_PARAMS(NewProp_XboxOne_MetaData, ARRAY_COUNT(NewProp_XboxOne_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[] = {
				{ "Category", "CustomPoolSizes" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Switch = { UE4CodeGen_Private::EPropertyClass::Int, "Switch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FCustomPoolSizes, Switch), METADATA_PARAMS(NewProp_Switch_MetaData, ARRAY_COUNT(NewProp_Switch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_MetaData[] = {
				{ "Category", "CustomPoolSizes" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4 = { UE4CodeGen_Private::EPropertyClass::Int, "PS4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FCustomPoolSizes, PS4), METADATA_PARAMS(NewProp_PS4_MetaData, ARRAY_COUNT(NewProp_PS4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobile_MetaData[] = {
				{ "Category", "CustomPoolSizes" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mobile = { UE4CodeGen_Private::EPropertyClass::Int, "Mobile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FCustomPoolSizes, Mobile), METADATA_PARAMS(NewProp_Mobile_MetaData, ARRAY_COUNT(NewProp_Mobile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desktop_MetaData[] = {
				{ "Category", "CustomPoolSizes" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Desktop = { UE4CodeGen_Private::EPropertyClass::Int, "Desktop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FCustomPoolSizes, Desktop), METADATA_PARAMS(NewProp_Desktop_MetaData, ARRAY_COUNT(NewProp_Desktop_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XboxOne,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Switch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mobile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Desktop,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CustomPoolSizes",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCustomPoolSizes),
				alignof(FCustomPoolSizes),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_CRC() { return 3388652309U; }
	void UFMODSettings::StaticRegisterNativesUFMODSettings()
	{
	}
	UClass* Z_Construct_UClass_UFMODSettings_NoRegister()
	{
		return UFMODSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FMODSettings.h" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WavWriterPath_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Force wav writer output, for debugging only.  Setting this will prevent normal sound output!" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_WavWriterPath = { UE4CodeGen_Private::EPropertyClass::Str, "WavWriterPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, WavWriterPath), METADATA_PARAMS(NewProp_WavWriterPath_MetaData, ARRAY_COUNT(NewProp_WavWriterPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipLoadBankName_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Skip bank files of the given name.\nCan be used to load all banks except for a certain set, such as localization banks." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkipLoadBankName = { UE4CodeGen_Private::EPropertyClass::Str, "SkipLoadBankName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, SkipLoadBankName), METADATA_PARAMS(NewProp_SkipLoadBankName_MetaData, ARRAY_COUNT(NewProp_SkipLoadBankName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterBankName_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Name of master bank.  The default in Studio is \"Master Bank\"." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterBankName = { UE4CodeGen_Private::EPropertyClass::Str, "MasterBankName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, MasterBankName), METADATA_PARAMS(NewProp_MasterBankName_MetaData, ARRAY_COUNT(NewProp_MasterBankName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcePlatformName_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Force platform directory name, or leave empty for automatic (Desktop/Mobile/PS4/XBoxOne)" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcePlatformName = { UE4CodeGen_Private::EPropertyClass::Str, "ForcePlatformName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, ForcePlatformName), METADATA_PARAMS(NewProp_ForcePlatformName_MetaData, ARRAY_COUNT(NewProp_ForcePlatformName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentBrowserPrefix_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Directory for content to appear in content window. Be careful changing this!" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentBrowserPrefix = { UE4CodeGen_Private::EPropertyClass::Str, "ContentBrowserPrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, ContentBrowserPrefix), METADATA_PARAMS(NewProp_ContentBrowserPrefix_MetaData, ARRAY_COUNT(NewProp_ContentBrowserPrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginFiles_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Extra plugin files to load.\nThe plugin files should sit alongside the FMOD dynamic libraries in the ThirdParty directory." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PluginFiles = { UE4CodeGen_Private::EPropertyClass::Array, "PluginFiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, PluginFiles), METADATA_PARAMS(NewProp_PluginFiles_MetaData, ARRAY_COUNT(NewProp_PluginFiles_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "PluginFiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveUpdatePort_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Live update port to use, or 0 for default." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LiveUpdatePort = { UE4CodeGen_Private::EPropertyClass::Int, "LiveUpdatePort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, LiveUpdatePort), METADATA_PARAMS(NewProp_LiveUpdatePort_MetaData, ARRAY_COUNT(NewProp_LiveUpdatePort_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryPoolSizes_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Use specified memory pool size for platform, units in bytes. Disabled by default.\nFMOD may become unstable if the limit is exceeded!" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemoryPoolSizes = { UE4CodeGen_Private::EPropertyClass::Struct, "MemoryPoolSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, MemoryPoolSizes), Z_Construct_UScriptStruct_FCustomPoolSizes, METADATA_PARAMS(NewProp_MemoryPoolSizes_MetaData, ARRAY_COUNT(NewProp_MemoryPoolSizes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAllBuses_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Lock all mixer buses at startup, making sure they are created up front." },
			};
#endif
			auto NewProp_bLockAllBuses_SetBit = [](void* Obj){ ((UFMODSettings*)Obj)->bLockAllBuses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAllBuses = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAllBuses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAllBuses_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockAllBuses_MetaData, ARRAY_COUNT(NewProp_bLockAllBuses_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOutputDriverName_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Output device to choose at system start up, or empty for default." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialOutputDriverName = { UE4CodeGen_Private::EPropertyClass::Str, "InitialOutputDriverName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, InitialOutputDriverName), METADATA_PARAMS(NewProp_InitialOutputDriverName_MetaData, ARRAY_COUNT(NewProp_InitialOutputDriverName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StudioUpdatePeriod_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Studio update period in milliseconds, or 0 for default (which means 20ms)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StudioUpdatePeriod = { UE4CodeGen_Private::EPropertyClass::Int, "StudioUpdatePeriod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, StudioUpdatePeriod), METADATA_PARAMS(NewProp_StudioUpdatePeriod_MetaData, ARRAY_COUNT(NewProp_StudioUpdatePeriod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSPBufferCount_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "DSP mixer buffer count, or 0 for system default." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DSPBufferCount = { UE4CodeGen_Private::EPropertyClass::Int, "DSPBufferCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, DSPBufferCount), METADATA_PARAMS(NewProp_DSPBufferCount_MetaData, ARRAY_COUNT(NewProp_DSPBufferCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSPBufferLength_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "DSP mixer buffer length, or 0 for system default." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DSPBufferLength = { UE4CodeGen_Private::EPropertyClass::Int, "DSPBufferLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, DSPBufferLength), METADATA_PARAMS(NewProp_DSPBufferLength_MetaData, ARRAY_COUNT(NewProp_DSPBufferLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalChannelCount_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Total number of voices available that can be either real or virtual." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalChannelCount = { UE4CodeGen_Private::EPropertyClass::Int, "TotalChannelCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, TotalChannelCount), METADATA_PARAMS(NewProp_TotalChannelCount_MetaData, ARRAY_COUNT(NewProp_TotalChannelCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Number of actual software voices that can be used at once." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RealChannelCount = { UE4CodeGen_Private::EPropertyClass::Int, "RealChannelCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, RealChannelCount), METADATA_PARAMS(NewProp_RealChannelCount_MetaData, ARRAY_COUNT(NewProp_RealChannelCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchHardwareSampleRate_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Whether to match hardware sample rate where reasonable (44.1kHz to 48kHz)." },
			};
#endif
			auto NewProp_bMatchHardwareSampleRate_SetBit = [](void* Obj){ ((UFMODSettings*)Obj)->bMatchHardwareSampleRate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchHardwareSampleRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bMatchHardwareSampleRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMatchHardwareSampleRate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMatchHardwareSampleRate_MetaData, ARRAY_COUNT(NewProp_bMatchHardwareSampleRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Sample rate to use, or 0 to match system rate." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate = { UE4CodeGen_Private::EPropertyClass::Int, "SampleRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, SampleRate), METADATA_PARAMS(NewProp_SampleRate_MetaData, ARRAY_COUNT(NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vol0VirtualLevel_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "If vol0virtual is enabled, the signal level at which to make channels virtual." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vol0VirtualLevel = { UE4CodeGen_Private::EPropertyClass::Float, "Vol0VirtualLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, Vol0VirtualLevel), METADATA_PARAMS(NewProp_Vol0VirtualLevel_MetaData, ARRAY_COUNT(NewProp_Vol0VirtualLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVol0Virtual_MetaData[] = {
				{ "Category", "InitSettings" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Whether to enable vol0virtual, which means voices with low volume will automatically go virtual to save CPU." },
			};
#endif
			auto NewProp_bVol0Virtual_SetBit = [](void* Obj){ ((UFMODSettings*)Obj)->bVol0Virtual = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVol0Virtual = { UE4CodeGen_Private::EPropertyClass::Bool, "bVol0Virtual", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVol0Virtual_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVol0Virtual_MetaData, ARRAY_COUNT(NewProp_bVol0Virtual_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Project Output Format, should match the mode set up for the Studio project." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "OutputFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, OutputFormat), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(NewProp_OutputFormat_MetaData, ARRAY_COUNT(NewProp_OutputFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankOutputDirectory_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "RelativeToGameContentDir", "" },
				{ "ToolTip", "Path to find your studio bank output directory, relative to Content directory." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BankOutputDirectory = { UE4CodeGen_Private::EPropertyClass::Struct, "BankOutputDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFMODSettings, BankOutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_BankOutputDirectory_MetaData, ARRAY_COUNT(NewProp_BankOutputDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLiveUpdate_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Enable live update in non-final builds." },
			};
#endif
			auto NewProp_bEnableLiveUpdate_SetBit = [](void* Obj){ ((UFMODSettings*)Obj)->bEnableLiveUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLiveUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLiveUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLiveUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLiveUpdate_MetaData, ARRAY_COUNT(NewProp_bEnableLiveUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllSampleData_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Whether to load all bank sample data into memory at startup." },
			};
#endif
			auto NewProp_bLoadAllSampleData_SetBit = [](void* Obj){ ((UFMODSettings*)Obj)->bLoadAllSampleData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllSampleData = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoadAllSampleData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoadAllSampleData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoadAllSampleData_MetaData, ARRAY_COUNT(NewProp_bLoadAllSampleData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllBanks_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "ToolTip", "Whether to load all banks at startup." },
			};
#endif
			auto NewProp_bLoadAllBanks_SetBit = [](void* Obj){ ((UFMODSettings*)Obj)->bLoadAllBanks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllBanks = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoadAllBanks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoadAllBanks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoadAllBanks_MetaData, ARRAY_COUNT(NewProp_bLoadAllBanks_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WavWriterPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkipLoadBankName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MasterBankName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForcePlatformName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentBrowserPrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PluginFiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PluginFiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LiveUpdatePort,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemoryPoolSizes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAllBuses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialOutputDriverName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StudioUpdatePeriod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DSPBufferCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DSPBufferLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalChannelCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RealChannelCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMatchHardwareSampleRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vol0VirtualLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVol0Virtual,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BankOutputDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLiveUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoadAllSampleData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoadAllBanks,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFMODSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFMODSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODSettings, 4264030167);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODSettings(Z_Construct_UClass_UFMODSettings, &UFMODSettings::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
