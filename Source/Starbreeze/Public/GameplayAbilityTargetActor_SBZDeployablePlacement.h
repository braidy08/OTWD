#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor_GroundTrace.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityTargetActor_SBZDeployablePlacement.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class AGameplayAbilityTargetActor_SBZDeployablePlacement : public AGameplayAbilityTargetActor_GroundTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PlacedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PlacedActorMaterial;
    
    AGameplayAbilityTargetActor_SBZDeployablePlacement();
};

