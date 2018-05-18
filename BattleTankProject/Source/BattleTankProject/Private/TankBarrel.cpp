// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "Engine/World.h"


void UTankBarrel::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1); // Restricting speed min/max percent
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds; // Calculate change in elevation
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange; // Calculate new elevation, given current + changed elevation 
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees); // Restricting elevation min/max degrees
	SetRelativeRotation(FRotator(Elevation, 0, 0)); // Set barrel pitch rotation to the new restricted elevation
}

