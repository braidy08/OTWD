#include "SBZAutoPickUpItem.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SBZOutlineComponent.h"

bool ASBZAutoPickUpItem::TryPickUpItem_Implementation(APlayerController* PlayerController) {
    return false;
}

ASBZAutoPickUpItem::ASBZAutoPickUpItem() {
    this->bCreatePickupInstanceForEachPlayer = true;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ActorPhysics"));
    this->SphereTriggerArea = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTriggerArea"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OulineComponent"));
}

