// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Sequencer/FMODEventControlSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSectionTemplate() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
class UScriptStruct* FFMODEventControlSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventControlSectionTemplate"), sizeof(FFMODEventControlSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventControlSectionTemplate(FFMODEventControlSectionTemplate::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventControlSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlSectionTemplate
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventControlSectionTemplate")),new UScriptStruct::TCppStructOps<FFMODEventControlSectionTemplate>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventControlSectionTemplate"), sizeof(FFMODEventControlSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSectionTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSectionTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FFMODEventControlSectionTemplate, ControlCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_ControlCurve_MetaData, ARRAY_COUNT(NewProp_ControlCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FMODEventControlSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FFMODEventControlSectionTemplate),
				alignof(FFMODEventControlSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC() { return 3016048849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
