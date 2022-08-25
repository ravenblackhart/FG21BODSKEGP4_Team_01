// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GP4T1 : ModuleRules
{
	public GP4T1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
