#include "SBZFactionIgnoreZone.h"
#include "Components/BoxComponent.h"
#include "SBZFactionIgnoreBoxComponent.h"

void ASBZFactionIgnoreZone::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZFactionIgnoreZone::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZFactionIgnoreZone::DeactivateZones() {
}

void ASBZFactionIgnoreZone::ActivateZones() {
}

ASBZFactionIgnoreZone::ASBZFactionIgnoreZone() {
    this->SBZFactionIgnoreBox = CreateDefaultSubobject<USBZFactionIgnoreBoxComponent>(TEXT("DefaultFactionIgnoreBoxComponent"));
    this->Boxes = CreateDefaultSubobject<UBoxComponent>(TEXT("ParentBoxComponent"));
    this->bKeepIgnoringFactionOnEnteringZone = false;
    this->bStartsEnabled = true;
}

