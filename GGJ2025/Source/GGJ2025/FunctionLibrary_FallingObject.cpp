// Fill out your copyright notice in the Description page of Project Settings.

#include "FunctionLibrary_FallingObject.h"
#include "GeometryCollection/GeometryCollectionComponent.h" // Add this include to resolve the incomplete type error

void UFunctionLibrary_FallingObject::RecreatePhysicsState_GeometryCollection(UGeometryCollectionComponent* GeometryCollectionComponent)
{
	GeometryCollectionComponent->RecreatePhysicsState(); // Use ClearPhysicsState instead of ResetPhysicsState
}
