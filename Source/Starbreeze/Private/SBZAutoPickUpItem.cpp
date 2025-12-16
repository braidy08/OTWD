#include "SBZAutoPickUpItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/StaticMeshComponent.h"
#include "SBZOutlineComponent.h"

ASBZAutoPickUpItem::ASBZAutoPickUpItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ActorPhysics"));
    this->bCreatePickupInstanceForEachPlayer = true;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->CollisionComponent = (UBoxComponent*)RootComponent;
    this->SphereTriggerArea = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTriggerArea"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OulineComponent"));
    this->SphereTriggerArea->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

bool ASBZAutoPickUpItem::TryPickUpItem_Implementation(APlayerController* PlayerController) {
    return false;
}


