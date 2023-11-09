#include "SBZSpawnRegion.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "SBZSpawnRegionBoxComponent.h"

void ASBZSpawnRegion::OnNavigationGenerationFinished(ANavigationData* NavigationData) {
}

void ASBZSpawnRegion::GetLastSpawnedPawns(TArray<APawn*>& OutPawns) {
}

ASBZSpawnRegion::ASBZSpawnRegion() {
    this->SpawnLocationTestCharacterClass = ACharacter::StaticClass();
    this->SpawnLocationBreadth = 1;
    this->SpawnLocationClearance = 1;
    this->SpawnLocationNavmeshDistance = 1;
    this->bShouldIgnoreActorScale = true;
    this->bDrawSpawnLocationGenerationDebugShapes = false;
    this->ActivationType = ESpawnActivationType::S_None;
    this->RandomRotationOffset = 1;
    this->bOverrideSpawnYaw = false;
    this->YawOverride = 1;
    this->SBZSpawnRegionBox = CreateDefaultSubobject<USBZSpawnRegionBoxComponent>(TEXT("DefaultRegionBoxComponent"));
    this->Boxes = CreateDefaultSubobject<UBoxComponent>(TEXT("ParentBoxComponent"));
    this->Proximity = CreateDefaultSubobject<USphereComponent>(TEXT("ProximitySphereComponent"));
    this->PreviousSpawnLocationIndex = 0;
}

