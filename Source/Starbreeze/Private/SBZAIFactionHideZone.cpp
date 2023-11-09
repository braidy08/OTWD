#include "SBZAIFactionHideZone.h"
#include "Components/BoxComponent.h"
#include "SBZFactionIgnoreBoxComponent.h"

void ASBZAIFactionHideZone::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZAIFactionHideZone::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZAIFactionHideZone::DeactivateZones() {
}

void ASBZAIFactionHideZone::CheckCharacter(ASBZCharacter* Character, const FGenericTeamId& TeamID) {
}

void ASBZAIFactionHideZone::ActivateZones() {
}

ASBZAIFactionHideZone::ASBZAIFactionHideZone() {
    this->SBZFactionSafeBox = CreateDefaultSubobject<USBZFactionIgnoreBoxComponent>(TEXT("DefaultFactionIgnoreBoxComponent"));
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("ParentBoxComponent"));
    this->bStartsEnabled = true;
}

