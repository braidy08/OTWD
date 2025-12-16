#include "SBZProceduralEffectField.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent
#include "Net/UnrealNetwork.h"

ASBZProceduralEffectField::ASBZProceduralEffectField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("EffectFieldCollisionComponent"));
    this->GameplayEffectOverlapComponent = (UProceduralMeshComponent*)RootComponent;
    this->QueryTemplate = NULL;
    this->DecalLineTraceChannel = ECC_WorldStatic;
    this->DecalLineTraceRadius = 1;
    this->DecalBaseSortOrder = 0;
    this->DecalDetailSortOrder = 0;
    this->RimDecalsSpreadAngle = 1;
    this->DomeDecalsSpreadAngle = 1;
}

void ASBZProceduralEffectField::OnRep_Locations() {
}

void ASBZProceduralEffectField::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZProceduralEffectField::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZProceduralEffectField::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZProceduralEffectField, ReplicatedLocations);
}


