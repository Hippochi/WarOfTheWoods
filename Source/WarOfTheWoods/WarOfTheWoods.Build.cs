// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WarOfTheWoods : ModuleRules
{
	public WarOfTheWoods(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" ,"AchievementSystem" });
	}
}
