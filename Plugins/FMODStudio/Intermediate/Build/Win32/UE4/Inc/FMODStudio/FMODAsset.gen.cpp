// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FMODAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAsset() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UFMODAsset::StaticRegisterNativesUFMODAsset()
	{
	}
	UClass* Z_Construct_UClass_UFMODAsset_NoRegister()
	{
		return UFMODAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAsset()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "FMODAsset.h" },
				{ "ModuleRelativePath", "Classes/FMODAsset.h" },
				{ "ToolTip", "FMOD Asset." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAsAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAsset.h" },
				{ "ToolTip", "Whether to show in the content window" },
			};
#endif
			auto NewProp_bShowAsAsset_SetBit = [](void* Obj){ ((UFMODAsset*)Obj)->bShowAsAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAsAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowAsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFMODAsset), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowAsAsset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowAsAsset_MetaData, ARRAY_COUNT(NewProp_bShowAsAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FMODAsset.h" },
				{ "ToolTip", "The unique Guid, which matches the one exported from FMOD Studio" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFMODAsset, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_AssetGuid_MetaData, ARRAY_COUNT(NewProp_AssetGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowAsAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetGuid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFMODAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFMODAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UFMODAsset, 3016104495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAsset(Z_Construct_UClass_UFMODAsset, &UFMODAsset::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
