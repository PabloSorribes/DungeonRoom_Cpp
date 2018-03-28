// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Sequencer/FMODEventParameterSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSection() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterSection_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FFMODEventParameterNameAndCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventParameterNameAndCurve"), sizeof(FFMODEventParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventParameterNameAndCurve(FFMODEventParameterNameAndCurve::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventParameterNameAndCurve"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterNameAndCurve
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterNameAndCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventParameterNameAndCurve")),new UScriptStruct::TCppStructOps<FFMODEventParameterNameAndCurve>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterNameAndCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventParameterNameAndCurve"), sizeof(FFMODEventParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSection.h" },
				{ "ToolTip", "Structure representing an animated event parameter and it's associated animation curve." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventParameterNameAndCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curve = { UE4CodeGen_Private::EPropertyClass::Struct, "Curve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFMODEventParameterNameAndCurve, Curve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Curve_MetaData, ARRAY_COUNT(NewProp_Curve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFMODEventParameterNameAndCurve, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFMODEventParameterNameAndCurve, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FMODEventParameterNameAndCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFMODEventParameterNameAndCurve),
				alignof(FFMODEventParameterNameAndCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC() { return 92975765U; }
	void UFMODEventParameterSection::StaticRegisterNativesUFMODEventParameterSection()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventParameterSection_NoRegister()
	{
		return UFMODEventParameterSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODEventParameterSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sequencer/FMODEventParameterSection.h" },
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSection.h" },
				{ "ToolTip", "A single movie scene section which can contain data for multiple event parameters." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventParameterNamesAndCurves_MetaData[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSection.h" },
				{ "ToolTip", "The event parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventParameterNamesAndCurves = { UE4CodeGen_Private::EPropertyClass::Array, "EventParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFMODEventParameterSection, EventParameterNamesAndCurves), METADATA_PARAMS(NewProp_EventParameterNamesAndCurves_MetaData, ARRAY_COUNT(NewProp_EventParameterNamesAndCurves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventParameterNamesAndCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventParameterNamesAndCurves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventParameterNamesAndCurves_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFMODEventParameterSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFMODEventParameterSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UFMODEventParameterSection, 3657614672);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventParameterSection(Z_Construct_UClass_UFMODEventParameterSection, &UFMODEventParameterSection::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventParameterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventParameterSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
