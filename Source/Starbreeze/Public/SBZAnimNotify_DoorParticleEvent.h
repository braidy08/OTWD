#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "SBZAnimNotify_DoorParticleEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_DoorParticleEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticleTag;
    
    USBZAnimNotify_DoorParticleEvent();
};

