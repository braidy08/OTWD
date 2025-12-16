#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZCosmeticActor -FallbackName=SBZCosmeticActor
#include "Templates/SubclassOf.h"
#include "OTWDFlareGunCosmetic.generated.h"

class ASkeletalMeshActor;

UCLASS(Blueprintable)
class OTWD_API UOTWDFlareGunCosmetic : public USBZCosmeticActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkeletalMeshActor> SkeletalMeshActorClass;
    
    UOTWDFlareGunCosmetic();

};

