#include "SBZArmorPartBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ASBZArmorPartBox::ASBZArmorPartBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->Box->SetupAttachment(RootComponent);
}

UBoxComponent* ASBZArmorPartBox::GetBox() const {
    return NULL;
}


