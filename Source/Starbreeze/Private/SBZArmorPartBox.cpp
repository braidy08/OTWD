#include "SBZArmorPartBox.h"
#include "Components/BoxComponent.h"

ASBZArmorPartBox::ASBZArmorPartBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->Box->SetupAttachment(RootComponent);
}

UBoxComponent* ASBZArmorPartBox::GetBox() const {
    return NULL;
}


