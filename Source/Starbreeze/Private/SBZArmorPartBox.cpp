#include "SBZArmorPartBox.h"
#include "Components/BoxComponent.h"

UBoxComponent* ASBZArmorPartBox::GetBox() const {
    return NULL;
}

ASBZArmorPartBox::ASBZArmorPartBox() {
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
}

