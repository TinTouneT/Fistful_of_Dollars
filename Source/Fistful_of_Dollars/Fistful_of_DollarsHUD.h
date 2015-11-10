// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "Fistful_of_DollarsHUD.generated.h"

UCLASS()
class AFistful_of_DollarsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFistful_of_DollarsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

