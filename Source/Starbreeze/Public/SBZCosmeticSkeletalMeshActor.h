#pragma once
#include "CoreMinimal.h"
#include "SBZCosmetic.h"
#include "Templates/SubclassOf.h"
#include "SBZCosmeticSkeletalMeshActor.generated.h"

class ASkeletalMeshActor;

UCLASS(Abstract, Blueprintable, Deprecated, NotPlaceable)
class STARBREEZE_API UDEPRECATED_SBZCosmeticSkeletalMeshActor : public USBZCosmetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkeletalMeshActor> SkeletalMeshActorClass;
    
    UDEPRECATED_SBZCosmeticSkeletalMeshActor();
};

