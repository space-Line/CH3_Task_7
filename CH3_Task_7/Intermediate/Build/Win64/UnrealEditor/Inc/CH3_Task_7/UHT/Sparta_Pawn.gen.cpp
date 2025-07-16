// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Task_7/Public/Sparta_Pawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparta_Pawn() {}

// Begin Cross Module References
CH3_TASK_7_API UClass* Z_Construct_UClass_ASparta_Pawn();
CH3_TASK_7_API UClass* Z_Construct_UClass_ASparta_Pawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CH3_Task_7();
// End Cross Module References

// Begin Class ASparta_Pawn Function Down
struct Z_Construct_UFunction_ASparta_Pawn_Down_Statics
{
	struct Sparta_Pawn_eventDown_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Pawn_Down_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Pawn_eventDown_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Pawn_Down_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Pawn_Down_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Down_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Pawn_Down_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Pawn, nullptr, "Down", nullptr, nullptr, Z_Construct_UFunction_ASparta_Pawn_Down_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Down_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Pawn_Down_Statics::Sparta_Pawn_eventDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Down_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Pawn_Down_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Pawn_Down_Statics::Sparta_Pawn_eventDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Pawn_Down()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Pawn_Down_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Pawn::execDown)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Down(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Pawn Function Down

// Begin Class ASparta_Pawn Function InclineDown
struct Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics
{
	struct Sparta_Pawn_eventInclineDown_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Pawn_eventInclineDown_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Pawn, nullptr, "InclineDown", nullptr, nullptr, Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::Sparta_Pawn_eventInclineDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::Sparta_Pawn_eventInclineDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Pawn_InclineDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Pawn_InclineDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Pawn::execInclineDown)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InclineDown(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Pawn Function InclineDown

// Begin Class ASparta_Pawn Function InclineUp
struct Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics
{
	struct Sparta_Pawn_eventInclineUp_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Pawn_eventInclineUp_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Pawn, nullptr, "InclineUp", nullptr, nullptr, Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::Sparta_Pawn_eventInclineUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::Sparta_Pawn_eventInclineUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Pawn_InclineUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Pawn_InclineUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Pawn::execInclineUp)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InclineUp(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Pawn Function InclineUp

// Begin Class ASparta_Pawn Function Look
struct Z_Construct_UFunction_ASparta_Pawn_Look_Statics
{
	struct Sparta_Pawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Pawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Pawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Pawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Pawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Pawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Pawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ASparta_Pawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Pawn_Look_Statics::Sparta_Pawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Pawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Pawn_Look_Statics::Sparta_Pawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Pawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Pawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Pawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Pawn Function Look

// Begin Class ASparta_Pawn Function Move
struct Z_Construct_UFunction_ASparta_Pawn_Move_Statics
{
	struct Sparta_Pawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Pawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Pawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Pawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Pawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Pawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Pawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ASparta_Pawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Pawn_Move_Statics::Sparta_Pawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Pawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Pawn_Move_Statics::Sparta_Pawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Pawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Pawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Pawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Pawn Function Move

// Begin Class ASparta_Pawn Function Up
struct Z_Construct_UFunction_ASparta_Pawn_Up_Statics
{
	struct Sparta_Pawn_eventUp_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Pawn_Up_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Pawn_eventUp_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Pawn_Up_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Pawn_Up_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Up_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Pawn_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Pawn, nullptr, "Up", nullptr, nullptr, Z_Construct_UFunction_ASparta_Pawn_Up_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Up_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Pawn_Up_Statics::Sparta_Pawn_eventUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Pawn_Up_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Pawn_Up_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Pawn_Up_Statics::Sparta_Pawn_eventUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Pawn_Up()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Pawn_Up_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Pawn::execUp)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Up(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Pawn Function Up

// Begin Class ASparta_Pawn
void ASparta_Pawn::StaticRegisterNativesASparta_Pawn()
{
	UClass* Class = ASparta_Pawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Down", &ASparta_Pawn::execDown },
		{ "InclineDown", &ASparta_Pawn::execInclineDown },
		{ "InclineUp", &ASparta_Pawn::execInclineUp },
		{ "Look", &ASparta_Pawn::execLook },
		{ "Move", &ASparta_Pawn::execMove },
		{ "Up", &ASparta_Pawn::execUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASparta_Pawn);
UClass* Z_Construct_UClass_ASparta_Pawn_NoRegister()
{
	return ASparta_Pawn::StaticClass();
}
struct Z_Construct_UClass_ASparta_Pawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Sparta_Pawn.h" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclineSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Pawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InclineSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASparta_Pawn_Down, "Down" }, // 3655252755
		{ &Z_Construct_UFunction_ASparta_Pawn_InclineDown, "InclineDown" }, // 1177090363
		{ &Z_Construct_UFunction_ASparta_Pawn_InclineUp, "InclineUp" }, // 2766088315
		{ &Z_Construct_UFunction_ASparta_Pawn_Look, "Look" }, // 1064744053
		{ &Z_Construct_UFunction_ASparta_Pawn_Move, "Move" }, // 2440217819
		{ &Z_Construct_UFunction_ASparta_Pawn_Up, "Up" }, // 3693139665
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASparta_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_InclineSpeed = { "InclineSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, InclineSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclineSpeed_MetaData), NewProp_InclineSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_RootSceneComp = { "RootSceneComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Pawn, RootSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComp_MetaData), NewProp_RootSceneComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASparta_Pawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_InclineSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Pawn_Statics::NewProp_RootSceneComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Pawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASparta_Pawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Task_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Pawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASparta_Pawn_Statics::ClassParams = {
	&ASparta_Pawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASparta_Pawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Pawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASparta_Pawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASparta_Pawn()
{
	if (!Z_Registration_Info_UClass_ASparta_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASparta_Pawn.OuterSingleton, Z_Construct_UClass_ASparta_Pawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASparta_Pawn.OuterSingleton;
}
template<> CH3_TASK_7_API UClass* StaticClass<ASparta_Pawn>()
{
	return ASparta_Pawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASparta_Pawn);
ASparta_Pawn::~ASparta_Pawn() {}
// End Class ASparta_Pawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASparta_Pawn, ASparta_Pawn::StaticClass, TEXT("ASparta_Pawn"), &Z_Registration_Info_UClass_ASparta_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASparta_Pawn), 2200409674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_3422383381(TEXT("/Script/CH3_Task_7"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
