#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hologram/FGBuildableHologram.h"

#include "FGBuildableHologramTurbine.generated.h"

UCLASS()
class UNIQUETURBINE_API AFGBuildableHologramTurbine : public AFGBuildableHologram
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFGBuildableHologramTurbine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void CheckValidPlacement() override;

	virtual bool TryUpgrade(const FHitResult& hitresult) override;

private:
	bool alreadyBuilt;
};