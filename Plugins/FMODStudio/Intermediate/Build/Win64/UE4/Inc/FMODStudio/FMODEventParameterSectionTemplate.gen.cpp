// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Sequencer/FMODEventParameterSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSectionTemplate() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve();
// End Cross Module References
class UScriptStruct* FFMODEventParameterSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventParameterSectionTemplate"), sizeof(FFMODEventParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventParameterSectionTemplate(FFMODEventParameterSectionTemplate::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventParameterSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterSectionTemplate
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventParameterSectionTemplate")),new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventParameterSectionTemplate"), sizeof(FFMODEventParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSectionTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSectionTemplate.h" },
				{ "ToolTip", "The scalar parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters = { UE4CodeGen_Private::EPropertyClass::Array, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FFMODEventParameterSectionTemplate, Parameters), METADATA_PARAMS(NewProp_Parameters_MetaData, ARRAY_COUNT(NewProp_Parameters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parameters_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FMODEventParameterSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FFMODEventParameterSectionTemplate),
				alignof(FFMODEventParameterSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC() { return 1053874411U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
