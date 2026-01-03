#include "SBZFactionIgnoreZone.h"
#include "Components/BoxComponent.h"
#include "SBZFactionIgnoreBoxComponent.h"

ASBZFactionIgnoreZone::ASBZFactionIgnoreZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ParentBoxComponent"));
    this->SBZFactionIgnoreBox = CreateDefaultSubobject<USBZFactionIgnoreBoxComponent>(TEXT("DefaultFactionIgnoreBoxComponent"));
    this->Boxes = (UBoxComponent*)RootComponent;
    this->bKeepIgnoringFactionOnEnteringZone = false;
    this->bStartsEnabled = true;
    this->SBZFactionIgnoreBox->SetupAttachment(RootComponent);
}

void ASBZFactionIgnoreZone::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZFactionIgnoreZone::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZFactionIgnoreZone::DeactivateZones() {
}

void ASBZFactionIgnoreZone::ActivateZones() {
}


