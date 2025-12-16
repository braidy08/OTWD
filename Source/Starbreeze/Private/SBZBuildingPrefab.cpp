#include "SBZBuildingPrefab.h"
#include "Components/SceneComponent.h"

ASBZBuildingPrefab::ASBZBuildingPrefab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->bEnableAutoLODGeneration = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bForceBuildingAccessStates = false;
    this->DefaultBuildingAccessState = ESBZBuildingAccessState::Closed;
    this->SpecialAccessComponentTag = TEXT("SpecialAccessComponent");
}

void ASBZBuildingPrefab::SetAllAccessesToState(ESBZBuildingAccessState NewState) {
}

void ASBZBuildingPrefab::SetAccessStates(const TArray<FSBZBuildingAccessStateData>& NewStates) {
}

void ASBZBuildingPrefab::SetAccessState(FName Identifier, ESBZBuildingAccessState NewState) {
}

void ASBZBuildingPrefab::OnAccessProcessSpecialComponent_Implementation(const FName& Identifier, const FSBZBuildingAccessInstance& InstanceData, ESBZBuildingAccessState State, USceneComponent* Component) {
}

void ASBZBuildingPrefab::OnAccessActorSpawned_Implementation(const FName& Identifier, const FSBZBuildingAccessInstance& InstanceData, AActor* Actor) {
}

bool ASBZBuildingPrefab::IsUsingForcedBuildingAccessStates() const {
    return false;
}

bool ASBZBuildingPrefab::HasAccess(FName Identifier) const {
    return false;
}

TArray<FName> ASBZBuildingPrefab::GetBuildingAccessIdentifiers() const {
    return TArray<FName>();
}

FTransform ASBZBuildingPrefab::GetAccessTransform(FName Identifier) const {
    return FTransform{};
}

FSBZBuildingAccessDoorData ASBZBuildingPrefab::GetAccessDoorData(FName Identifier) const {
    return FSBZBuildingAccessDoorData{};
}


