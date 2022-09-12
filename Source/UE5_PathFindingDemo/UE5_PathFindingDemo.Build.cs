// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_PathFindingDemo : ModuleRules
{
	public UE5_PathFindingDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
