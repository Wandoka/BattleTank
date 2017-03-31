// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "MyProject.h"
#include "GeneratedCppIncludes.h"
#include "MyProject.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MyProject() {}
	void AMyProjectGameModeBase::StaticRegisterNativesAMyProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS(AMyProjectGameModeBase, 528096593);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameModeBase_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameModeBase();
	MYPROJECT_API class UPackage* Z_Construct_UPackage__Script_MyProject();
	UClass* Z_Construct_UClass_AMyProjectGameModeBase_NoRegister()
	{
		return AMyProjectGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameModeBase(Z_Construct_UClass_AMyProjectGameModeBase, &AMyProjectGameModeBase::StaticClass, TEXT("AMyProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameModeBase);
	UPackage* Z_Construct_UPackage__Script_MyProject()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/MyProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB86FF4A1;
			Guid.B = 0x3E8EAA66;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
