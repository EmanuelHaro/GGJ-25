#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeometryCollection/GeometryCollectionComponent.h" // Add this include to resolve the incomplete type error
#include "FunctionLibrary_FallingObject.generated.h"

UCLASS()
class GGJ2025_API UFunctionLibrary_FallingObject : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Physics")
	static void RecreatePhysicsState_GeometryCollection(UGeometryCollectionComponent* GeometryCollectionComponent);
};
