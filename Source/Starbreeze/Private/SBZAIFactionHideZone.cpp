#include "SBZAIFactionHideZone.h"
#include "Components/BoxComponent.h"
#include "SBZFactionIgnoreBoxComponent.h"

ASBZAIFactionHideZone::ASBZAIFactionHideZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ParentBoxComponent"));
    this->SBZFactionSafeBox = CreateDefaultSubobject<USBZFactionIgnoreBoxComponent>(TEXT("DefaultFactionIgnoreBoxComponent"));
    this->Box = (UBoxComponent*)RootComponent;
    this->bStartsEnabled = true;
    this->SBZFactionSafeBox->SetupAttachment(RootComponent);
}

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


