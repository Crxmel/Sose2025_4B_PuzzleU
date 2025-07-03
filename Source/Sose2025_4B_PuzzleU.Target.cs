// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sose2025_4B_PuzzleUTarget : TargetRules
{
	public Sose2025_4B_PuzzleUTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Sose2025_4B_PuzzleU" } );
	}
}
