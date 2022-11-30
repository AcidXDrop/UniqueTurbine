
#include "FGBuildableHologramTurbine.h"
#include "FGConstructDisqualifier.h"
#include "FGBuildableGeneratorTurbine.h"
#include "FGConstructDisqualifier.h"

// Sets default values
AFGBuildableHologramTurbine::AFGBuildableHologramTurbine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	SetActorTickEnabled(true);
}

// Called when the game starts or when spawned
void AFGBuildableHologramTurbine::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFGBuildableGeneratorTurbine::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		alreadyBuilt = true;
	}
	else
	{
		alreadyBuilt = false;
	}
}

// Called every frame
void AFGBuildableHologramTurbine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFGBuildableHologramTurbine::CheckValidPlacement()
{
	if (alreadyBuilt)
	{
		this->AddConstructDisqualifier(UFGCDUniqueBuilding::StaticClass());
	}
	AFGBuildableHologram::CheckValidPlacement();
}

bool AFGBuildableHologramTurbine::TryUpgrade(const FHitResult& hitresult)
{
	return AFGBuildableHologram::TryUpgrade(hitresult);
}
