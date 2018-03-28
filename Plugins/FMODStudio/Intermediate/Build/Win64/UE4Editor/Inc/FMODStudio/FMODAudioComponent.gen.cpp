// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FMODAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioComponent() {}
// Cross Module References
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_TriggerCue();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature()
	{
		struct _Script_FMODStudio_eventOnTimelineBeat_Parms
		{
			int32 Bar;
			int32 Beat;
			int32 Position;
			float Tempo;
			int32 TimeSignatureUpper;
			int32 TimeSignatureLower;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeSignatureLower = { UE4CodeGen_Private::EPropertyClass::Int, "TimeSignatureLower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, TimeSignatureLower), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeSignatureUpper = { UE4CodeGen_Private::EPropertyClass::Int, "TimeSignatureUpper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, TimeSignatureUpper), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tempo = { UE4CodeGen_Private::EPropertyClass::Float, "Tempo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Tempo), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Int, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Position), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Beat = { UE4CodeGen_Private::EPropertyClass::Int, "Beat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Beat), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bar = { UE4CodeGen_Private::EPropertyClass::Int, "Bar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Bar), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeSignatureLower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeSignatureUpper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tempo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Beat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bar,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "called when we reach a beat on the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FMODStudio, "OnTimelineBeat__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FMODStudio_eventOnTimelineBeat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature()
	{
		struct _Script_FMODStudio_eventOnTimelineMarker_Parms
		{
			FString Name;
			int32 Position;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Int, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineMarker_Parms, Position), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineMarker_Parms, Name), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "called when we reach a named marker on the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FMODStudio, "OnTimelineMarker__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FMODStudio_eventOnTimelineMarker_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "called when an event stops, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FMODStudio, "OnEventStopped__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFMODEventProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventProperty, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventProperty"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODEventProperty(EFMODEventProperty_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODEventProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC() { return 3324612394U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODEventProperty"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODEventProperty::ChannelPriority", (int64)EFMODEventProperty::ChannelPriority },
				{ "EFMODEventProperty::ScheduleDelay", (int64)EFMODEventProperty::ScheduleDelay },
				{ "EFMODEventProperty::ScheduleLookahead", (int64)EFMODEventProperty::ScheduleLookahead },
				{ "EFMODEventProperty::MinimumDistance", (int64)EFMODEventProperty::MinimumDistance },
				{ "EFMODEventProperty::MaximumDistance", (int64)EFMODEventProperty::MaximumDistance },
				{ "EFMODEventProperty::Count", (int64)EFMODEventProperty::Count },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ChannelPriority.ToolTip", "Priority to set on low-level channels created by this event instance (-1 to 256)." },
				{ "Count.ToolTip", "Number of options" },
				{ "MaximumDistance.ToolTip", "Override the event's 3D maximum distance, or -1 for default." },
				{ "MinimumDistance.ToolTip", "Override the event's 3D minimum distance, or -1 for default." },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ScheduleDelay.ToolTip", "Schedule delay to synchronized playback for multiple tracks in DSP clocks, or -1 for default." },
				{ "ScheduleLookahead.ToolTip", "Schedule look-ahead on the timeline in DSP clocks, or -1 for default." },
				{ "ToolTip", "Event property" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFMODEventProperty",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EFMODEventProperty::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFMODOcclusionDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODOcclusionDetails, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODOcclusionDetails"), sizeof(FFMODOcclusionDetails), Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODOcclusionDetails(FFMODOcclusionDetails::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODOcclusionDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODOcclusionDetails")),new UScriptStruct::TCppStructOps<FFMODOcclusionDetails>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODOcclusionDetails"), sizeof(FFMODOcclusionDetails), Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODOcclusionDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
				{ "Category", "FMOD|Occlusion" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Whether or not to enable complex geometry occlusion checks." },
			};
#endif
			auto NewProp_bUseComplexCollisionForOcclusion_SetBit = [](void* Obj){ ((FFMODOcclusionDetails*)Obj)->bUseComplexCollisionForOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseComplexCollisionForOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFMODOcclusionDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseComplexCollisionForOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseComplexCollisionForOcclusion_MetaData, ARRAY_COUNT(NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[] = {
				{ "Category", "FMOD|Occlusion" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionInterpolationTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionInterpolationTime), METADATA_PARAMS(NewProp_OcclusionInterpolationTime_MetaData, ARRAY_COUNT(NewProp_OcclusionInterpolationTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[] = {
				{ "Category", "FMOD|Occlusion" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionVolumeAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionVolumeAttenuation), METADATA_PARAMS(NewProp_OcclusionVolumeAttenuation_MetaData, ARRAY_COUNT(NewProp_OcclusionVolumeAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
				{ "Category", "FMOD|Occlusion" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "The low pass filter frequency (in hertz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionLowPassFilterFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionLowPassFilterFrequency), METADATA_PARAMS(NewProp_OcclusionLowPassFilterFrequency_MetaData, ARRAY_COUNT(NewProp_OcclusionLowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[] = {
				{ "Category", "FMOD|Occlusion" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_OcclusionTraceChannel_MetaData, ARRAY_COUNT(NewProp_OcclusionTraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[] = {
				{ "Category", "FMOD|Occlusion" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Enable Occlusion Settings." },
			};
#endif
			auto NewProp_bEnableOcclusion_SetBit = [](void* Obj){ ((FFMODOcclusionDetails*)Obj)->bEnableOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFMODOcclusionDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableOcclusion_MetaData, ARRAY_COUNT(NewProp_bEnableOcclusion_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseComplexCollisionForOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionInterpolationTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionVolumeAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionLowPassFilterFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionTraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableOcclusion,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FMODOcclusionDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFMODOcclusionDetails),
				alignof(FFMODOcclusionDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC() { return 2929468799U; }
class UScriptStruct* FFMODAttenuationDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODAttenuationDetails, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODAttenuationDetails"), sizeof(FFMODAttenuationDetails), Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODAttenuationDetails(FFMODAttenuationDetails::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODAttenuationDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODAttenuationDetails")),new UScriptStruct::TCppStructOps<FFMODAttenuationDetails>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODAttenuationDetails"), sizeof(FFMODAttenuationDetails), Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODAttenuationDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[] = {
				{ "Category", "FMOD|Attenuation" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Override the event's 3D maximum distance." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODAttenuationDetails, MaximumDistance), METADATA_PARAMS(NewProp_MaximumDistance_MetaData, ARRAY_COUNT(NewProp_MaximumDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[] = {
				{ "Category", "FMOD|Attenuation" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Override the event's 3D minimum distance." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODAttenuationDetails, MinimumDistance), METADATA_PARAMS(NewProp_MinimumDistance_MetaData, ARRAY_COUNT(NewProp_MinimumDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "Category", "FMOD|Attenuation" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Should we use Attenuation set in Studio or be able to modify in Editor." },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((FFMODAttenuationDetails*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFMODAttenuationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FMODAttenuationDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFMODAttenuationDetails),
				alignof(FFMODAttenuationDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC() { return 2698840667U; }
	void UFMODAudioComponent::StaticRegisterNativesUFMODAudioComponent()
	{
		UClass* Class = UFMODAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLength", (Native)&UFMODAudioComponent::execGetLength },
			{ "GetParameter", (Native)&UFMODAudioComponent::execGetParameter },
			{ "GetProperty", (Native)&UFMODAudioComponent::execGetProperty },
			{ "GetTimelinePosition", (Native)&UFMODAudioComponent::execGetTimelinePosition },
			{ "IsPlaying", (Native)&UFMODAudioComponent::execIsPlaying },
			{ "Play", (Native)&UFMODAudioComponent::execPlay },
			{ "Release", (Native)&UFMODAudioComponent::execRelease },
			{ "SetEvent", (Native)&UFMODAudioComponent::execSetEvent },
			{ "SetParameter", (Native)&UFMODAudioComponent::execSetParameter },
			{ "SetPaused", (Native)&UFMODAudioComponent::execSetPaused },
			{ "SetPitch", (Native)&UFMODAudioComponent::execSetPitch },
			{ "SetProgrammerSoundName", (Native)&UFMODAudioComponent::execSetProgrammerSoundName },
			{ "SetProperty", (Native)&UFMODAudioComponent::execSetProperty },
			{ "SetTimelinePosition", (Native)&UFMODAudioComponent::execSetTimelinePosition },
			{ "SetVolume", (Native)&UFMODAudioComponent::execSetVolume },
			{ "Stop", (Native)&UFMODAudioComponent::execStop },
			{ "TriggerCue", (Native)&UFMODAudioComponent::execTriggerCue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength()
	{
		struct FMODAudioComponent_eventGetLength_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Get the event length in milliseconds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FMODAudioComponent_eventGetLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter()
	{
		struct FMODAudioComponent_eventGetParameter_Parms
		{
			FName Name;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Get parameter value from the event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventGetParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetProperty()
	{
		struct FMODAudioComponent_eventGetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property = { UE4CodeGen_Private::EPropertyClass::Byte, "Property", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Property,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Get a property from the event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventGetProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition()
	{
		struct FMODAudioComponent_eventGetTimelinePosition_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetTimelinePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Get the timeline position in milliseconds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetTimelinePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventGetTimelinePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying()
	{
		struct FMODAudioComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FMODAudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMODAudioComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "@return true if this component is currently playing an event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Start a sound playing on an audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "Release", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent()
	{
		struct FMODAudioComponent_eventSetEvent_Parms
		{
			UFMODEvent* NewEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewEvent = { UE4CodeGen_Private::EPropertyClass::Object, "NewEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetEvent_Parms, NewEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter()
	{
		struct FMODAudioComponent_eventSetParameter_Parms
		{
			FName Name;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Set a parameter into the event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused()
	{
		struct FMODAudioComponent_eventSetPaused_Parms
		{
			bool paused;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_paused_SetBit = [](void* Obj){ ((FMODAudioComponent_eventSetPaused_Parms*)Obj)->paused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_paused = { UE4CodeGen_Private::EPropertyClass::Bool, "paused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMODAudioComponent_eventSetPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_paused_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_paused,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Pause/Unpause an audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch()
	{
		struct FMODAudioComponent_eventSetPitch_Parms
		{
			float pitch;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch = { UE4CodeGen_Private::EPropertyClass::Float, "pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetPitch_Parms, pitch), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pitch,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Set pitch on an audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetPitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetPitch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName()
	{
		struct FMODAudioComponent_eventSetProgrammerSoundName_Parms
		{
			FString Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetProgrammerSoundName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Set the sound name to use for programmer sound.  Will look up the name in any loaded audio table." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetProgrammerSoundName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetProgrammerSoundName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty()
	{
		struct FMODAudioComponent_eventSetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property = { UE4CodeGen_Private::EPropertyClass::Byte, "Property", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Property,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Set a parameter into the event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition()
	{
		struct FMODAudioComponent_eventSetTimelinePosition_Parms
		{
			int32 Time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Int, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetTimelinePosition_Parms, Time), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Set the timeline position in milliseconds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetTimelinePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetTimelinePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume()
	{
		struct FMODAudioComponent_eventSetVolume_Parms
		{
			float volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume = { UE4CodeGen_Private::EPropertyClass::Float, "volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_volume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Set volume on an audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Stop an audio component playing its sound cue, issue any delegates if needed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_TriggerCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|FMOD|Components" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Trigger a cue in an event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "TriggerCue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister()
	{
		return UFMODAudioComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UFMODAudioComponent_GetLength, "GetLength" }, // 2609346924
				{ &Z_Construct_UFunction_UFMODAudioComponent_GetParameter, "GetParameter" }, // 3690659032
				{ &Z_Construct_UFunction_UFMODAudioComponent_GetProperty, "GetProperty" }, // 4266270374
				{ &Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition, "GetTimelinePosition" }, // 1506296677
				{ &Z_Construct_UFunction_UFMODAudioComponent_IsPlaying, "IsPlaying" }, // 456697181
				{ &Z_Construct_UFunction_UFMODAudioComponent_Play, "Play" }, // 1485355401
				{ &Z_Construct_UFunction_UFMODAudioComponent_Release, "Release" }, // 899962445
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetEvent, "SetEvent" }, // 1002031630
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetParameter, "SetParameter" }, // 1295348339
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetPaused, "SetPaused" }, // 4266696784
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetPitch, "SetPitch" }, // 1926995589
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName, "SetProgrammerSoundName" }, // 1287376104
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetProperty, "SetProperty" }, // 1968998508
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition, "SetTimelinePosition" }, // 1889011943
				{ &Z_Construct_UFunction_UFMODAudioComponent_SetVolume, "SetVolume" }, // 1349848737
				{ &Z_Construct_UFunction_UFMODAudioComponent_Stop, "Stop" }, // 2632964438
				{ &Z_Construct_UFunction_UFMODAudioComponent_TriggerCue, "TriggerCue" }, // 2496860139
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Audio Common" },
				{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
				{ "IncludePath", "FMODAudioComponent.h" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Plays FMOD Studio events." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionDetails_MetaData[] = {
				{ "Category", "FMODAudio" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "FMOD Custom Attenuation Details" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OcclusionDetails = { UE4CodeGen_Private::EPropertyClass::Struct, "OcclusionDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OcclusionDetails), Z_Construct_UScriptStruct_FFMODOcclusionDetails, METADATA_PARAMS(NewProp_OcclusionDetails_MetaData, ARRAY_COUNT(NewProp_OcclusionDetails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationDetails_MetaData[] = {
				{ "Category", "FMODAudio" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "FMOD Custom Attenuation Details" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationDetails = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, AttenuationDetails), Z_Construct_UScriptStruct_FFMODAttenuationDetails, METADATA_PARAMS(NewProp_AttenuationDetails_MetaData, ARRAY_COUNT(NewProp_AttenuationDetails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineBeat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "called when we reach a beat of a tempo (if bEnableTimelineCallbacks is true)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineBeat = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTimelineBeat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineBeat), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature, METADATA_PARAMS(NewProp_OnTimelineBeat_MetaData, ARRAY_COUNT(NewProp_OnTimelineBeat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineMarker_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "called when we reach a named marker (if bEnableTimelineCallbacks is true)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineMarker = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTimelineMarker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineMarker), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature, METADATA_PARAMS(NewProp_OnTimelineMarker_MetaData, ARRAY_COUNT(NewProp_OnTimelineMarker_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventStopped_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "called when an event stops, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventStopped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEventStopped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OnEventStopped), Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature, METADATA_PARAMS(NewProp_OnEventStopped_MetaData, ARRAY_COUNT(NewProp_OnEventStopped_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Stop sound when owner is destroyed" },
			};
#endif
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((UFMODAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Auto destroy this component on completion" },
			};
#endif
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((UFMODAudioComponent*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTimelineCallbacks_MetaData[] = {
				{ "Category", "FMODAudio" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Enable timeline callbacks for this sound, so that OnTimelineMarker and OnTimelineBeat can be used" },
			};
#endif
			auto NewProp_bEnableTimelineCallbacks_SetBit = [](void* Obj){ ((UFMODAudioComponent*)Obj)->bEnableTimelineCallbacks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTimelineCallbacks = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTimelineCallbacks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTimelineCallbacks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableTimelineCallbacks_MetaData, ARRAY_COUNT(NewProp_bEnableTimelineCallbacks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgrammerSoundName_MetaData[] = {
				{ "Category", "FMODAudio" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Sound name used for programmer sound.  Will look up the name in any loaded audio table." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgrammerSoundName = { UE4CodeGen_Private::EPropertyClass::Str, "ProgrammerSoundName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, ProgrammerSoundName), METADATA_PARAMS(NewProp_ProgrammerSoundName_MetaData, ARRAY_COUNT(NewProp_ProgrammerSoundName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCache_MetaData[] = {
				{ "Category", "FMODAudio" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "Event parameter cache" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParameterCache = { UE4CodeGen_Private::EPropertyClass::Map, "ParameterCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010020000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, ParameterCache), METADATA_PARAMS(NewProp_ParameterCache_MetaData, ARRAY_COUNT(NewProp_ParameterCache_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterCache_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterCache_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterCache_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "ParameterCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
				{ "Category", "FMODAudio" },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ToolTip", "The event asset to use for this sound" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Event = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Event", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(NewProp_Event_MetaData, ARRAY_COUNT(NewProp_Event_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTimelineBeat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTimelineMarker,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnEventStopped,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTimelineCallbacks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProgrammerSoundName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterCache_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterCache_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Event,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFMODAudioComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFMODAudioComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAudioComponent, 3961427632);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAudioComponent(Z_Construct_UClass_UFMODAudioComponent, &UFMODAudioComponent::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
