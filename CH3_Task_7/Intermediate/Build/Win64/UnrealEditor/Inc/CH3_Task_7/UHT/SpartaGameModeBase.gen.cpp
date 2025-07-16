// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Task_7/Public/SpartaGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaGameModeBase() {}

// Begin Cross Module References
CH3_TASK_7_API UClass* Z_Construct_UClass_ASpartaGameModeBase();
CH3_TASK_7_API UClass* Z_Construct_UClass_ASpartaGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CH3_Task_7();
// End Cross Module References

// Begin Class ASpartaGameModeBase
void ASpartaGameModeBase::StaticRegisterNativesASpartaGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaGameModeBase);
UClass* Z_Construct_UClass_ASpartaGameModeBase_NoRegister()
{
	return ASpartaGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASpartaGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpartaGameModeBase.h" },
		{ "ModuleRelativePath", "Public/SpartaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpartaGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Task_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaGameModeBase_Statics::ClassParams = {
	&ASpartaGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaGameModeBase()
{
	if (!Z_Registration_Info_UClass_ASpartaGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaGameModeBase.OuterSingleton, Z_Construct_UClass_ASpartaGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaGameModeBase.OuterSingleton;
}
template<> CH3_TASK_7_API UClass* StaticClass<ASpartaGameModeBase>()
{
	return ASpartaGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaGameModeBase);
ASpartaGameModeBase::~ASpartaGameModeBase() {}
// End Class ASpartaGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_SpartaGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaGameModeBase, ASpartaGameModeBase::StaticClass, TEXT("ASpartaGameModeBase"), &Z_Registration_Info_UClass_ASpartaGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaGameModeBase), 1258471118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_SpartaGameModeBase_h_2403329292(TEXT("/Script/CH3_Task_7"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_SpartaGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_SpartaGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
