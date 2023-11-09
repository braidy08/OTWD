#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZDoorSound.h"
#include "SBZDoorActionSounds.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorActionSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorSound ActionInteractionBeginSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorSound ActionBeginSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorSound ActionEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZDoorSound> SoundMap;
    
    FSBZDoorActionSounds();
};

