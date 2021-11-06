// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PizzaRace/GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	PIZZARACE_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
	PIZZARACE_API UClass* Z_Construct_UClass_UGameHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PizzaRace();
	PIZZARACE_API UClass* Z_Construct_UClass_APizzaRaceGameModeBase_NoRegister();
// End Cross Module References
	static FName NAME_UGameHUD_KeepTime = FName(TEXT("KeepTime"));
	void UGameHUD::KeepTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameHUD_KeepTime),NULL);
	}
	void UGameHUD::StaticRegisterNativesUGameHUD()
	{
	}
	struct Z_Construct_UFunction_UGameHUD_KeepTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_KeepTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_KeepTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "KeepTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_KeepTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_KeepTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_KeepTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_KeepTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHUD_NoRegister()
	{
		return UGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PizzaRace,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHUD_KeepTime, "KeepTime" }, // 1146480611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUD, GameModeRef), Z_Construct_UClass_APizzaRaceGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_Statics::NewProp_GameModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::NewProp_GameModeRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_Statics::NewProp_GameModeRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_Statics::ClassParams = {
		&UGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHUD, 3353537091);
	template<> PIZZARACE_API UClass* StaticClass<UGameHUD>()
	{
		return UGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUD(Z_Construct_UClass_UGameHUD, &UGameHUD::StaticClass, TEXT("/Script/PizzaRace"), TEXT("UGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
