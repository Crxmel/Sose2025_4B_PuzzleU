// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sose2025_4B_PuzzleUEditorTarget : TargetRules
{
	public Sose2025_4B_PuzzleUEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Sose2025_4B_PuzzleU" } );
	}
}
