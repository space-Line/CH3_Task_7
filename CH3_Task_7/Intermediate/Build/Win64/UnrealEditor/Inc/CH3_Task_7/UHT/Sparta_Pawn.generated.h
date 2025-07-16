// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sparta_Pawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef CH3_TASK_7_Sparta_Pawn_generated_h
#error "Sparta_Pawn.generated.h already included, missing '#pragma once' in Sparta_Pawn.h"
#endif
#define CH3_TASK_7_Sparta_Pawn_generated_h

#define FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInclineDown); \
	DECLARE_FUNCTION(execInclineUp); \
	DECLARE_FUNCTION(execDown); \
	DECLARE_FUNCTION(execUp); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASparta_Pawn(); \
	friend struct Z_Construct_UClass_ASparta_Pawn_Statics; \
public: \
	DECLARE_CLASS(ASparta_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_Task_7"), NO_API) \
	DECLARE_SERIALIZER(ASparta_Pawn)


#define FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASparta_Pawn(ASparta_Pawn&&); \
	ASparta_Pawn(const ASparta_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASparta_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASparta_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASparta_Pawn) \
	NO_API virtual ~ASparta_Pawn();


#define FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_12_PROLOG
#define FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_TASK_7_API UClass* StaticClass<class ASparta_Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_CH3_Task_7_CH3_Task_7_Source_CH3_Task_7_Public_Sparta_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
