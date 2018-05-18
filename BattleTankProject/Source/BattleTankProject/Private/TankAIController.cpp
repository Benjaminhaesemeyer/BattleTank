// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"

//void ATankAIController::BeginPlay()
//{
//	Super::BeginPlay();
//
//	///Storing reference to the tank the player controls 
//	auto PlayerTank = GetPlayerTank();
//	if (!PlayerTank)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("AIController can't find a player tank"));
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("AIController found player: %s"), *(PlayerTank->GetName()));
//	}
//}

// Function called every frame.
//void ATankAIController::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	if (GetPlayerTank())
//	{
//		// TODO move towards the player
//
//		// Aim at the player
//		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
//
//		// fire at player if ready
//
//
//	}
//}

//ATank* ATankAIController::GetControlledTank() const
//{
//	return Cast<ATank>(GetPawn());
//}
//
//ATank* ATankAIController::GetPlayerTank() const
//{
//	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn(); //gets the player controller
//	if (!PlayerPawn) { return nullptr; }
//	return Cast<ATank>(PlayerPawn);
//}


