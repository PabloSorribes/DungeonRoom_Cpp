// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DungeonRoom_CppEditorTarget : TargetRules
{
	public DungeonRoom_CppEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("DungeonRoom_Cpp");
	}
}
