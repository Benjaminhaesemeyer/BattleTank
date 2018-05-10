// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKPROJECT_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	class ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	class ATank* GetPlayerTank() const;
	
	
};
