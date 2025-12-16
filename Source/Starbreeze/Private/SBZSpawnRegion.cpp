#include "SBZSpawnRegion.h"
#include "GameFramework/Character.h"
#include "SBZSpawnRegionBoxComponent.h"

ASBZSpawnRegion::ASBZSpawnRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRandomizeSpawnLocationStartingIndex = false;
    this->SpawnLocationTestCharacterClass = ACharacter::StaticClass();
    this->SpawnLocationBreadth = 1;
    this->SpawnLocationClearance = 1;
    this->SpawnLocationNavmeshDistance = 1;
    this->bShouldIgnoreActorScale = true;
    this->bDrawSpawnLocationGenerationDebugShapes = false;
    this->RandomRotationOffset = 1;
    this->bOverrideSpawnYaw = false;
    this->YawOverride = 1;
    this->SBZSpawnRegionBox = CreateDefaultSubobject<USBZSpawnRegionBoxComponent>(TEXT("DefaultRegionBoxComponent"));
    this->SBZSpawnRegionBox->SetupAttachment(RootComponent);
}

void ASBZSpawnRegion::GetLastSpawnedPawns(TArray<APawn*>& OutPawns) {
}


