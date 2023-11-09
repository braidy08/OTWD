#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticActor.h"
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

