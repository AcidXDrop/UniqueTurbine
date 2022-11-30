#pragma once

#include "CoreMinimal.h"
#include "Buildables/FGBuildableGenerator.h"
#include "GameFramework/Actor.h"

#include "FGBuildableGeneratorTurbine.generated.h"

UCLASS()
class UNIQUETURBINE_API AFGBuildableGeneratorTurbine : public AFGBuildableGenerator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFGBuildableGeneratorTurbine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};