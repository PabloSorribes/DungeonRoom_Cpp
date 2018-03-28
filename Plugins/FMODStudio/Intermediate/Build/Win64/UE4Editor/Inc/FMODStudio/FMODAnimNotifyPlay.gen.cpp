// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FMODAnimNotifyPlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAnimNotifyPlay() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References
	void UFMODAnimNotifyPlay::StaticRegisterNativesUFMODAnimNotifyPlay()
	{
	}
	UClass* Z_Construct_UClass_UFMODAnimNotifyPlay_NoRegister()
	{
		return UFMODAnimNotifyPlay::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAnimNotifyPlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotify,
				(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Play FMOD Event" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "FMODAnimNotifyPlay.h" },
				{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
				{ "Category", "FMOD Anim Notify" },
				{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
				{ "ToolTip", "Sound to Play" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Event = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Event", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(UFMODAnimNotifyPlay, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(NewProp_Event_MetaData, ARRAY_COUNT(NewProp_Event_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[] = {
				{ "Category", "FMOD Anim Notify" },
				{ "EditCondition", "bFollow" },
				{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
				{ "ToolTip", "Socket or bone name to attach sound to" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttachName = { UE4CodeGen_Private::EPropertyClass::Str, "AttachName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, STRUCT_OFFSET(UFMODAnimNotifyPlay, AttachName), METADATA_PARAMS(NewProp_AttachName_MetaData, ARRAY_COUNT(NewProp_AttachName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
				{ "Category", "FMOD Anim Notify" },
				{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
				{ "ToolTip", "If this sound should follow its owner" },
			};
#endif
			auto NewProp_bFollow_SetBit = [](void* Obj){ ((UFMODAnimNotifyPlay*)Obj)->bFollow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow = { UE4CodeGen_Private::EPropertyClass::Bool, "bFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAnimNotifyPlay), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFollow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFollow_MetaData, ARRAY_COUNT(NewProp_bFollow_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Event,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFollow,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFMODAnimNotifyPlay>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFMODAnimNotifyPlay::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00112080u,
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
	IMPLEMENT_CLASS(UFMODAnimNotifyPlay, 1234687153);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAnimNotifyPlay(Z_Construct_UClass_UFMODAnimNotifyPlay, &UFMODAnimNotifyPlay::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAnimNotifyPlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAnimNotifyPlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
