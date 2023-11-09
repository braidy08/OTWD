#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "SBZAnimNotify_DoorSoundEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_DoorSoundEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SoundTag;
    
    USBZAnimNotify_DoorSoundEvent();
};

