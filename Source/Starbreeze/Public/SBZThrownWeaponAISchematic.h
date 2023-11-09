#pragma once
#include "CoreMinimal.h"
#include "ESBZVoiceComment.h"
#include "SBZSchematic.h"
#include "Templates/SubclassOf.h"
#include "SBZThrownWeaponAISchematic.generated.h"

class AActor;
class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZThrownWeaponAISchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ThrownItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownOnSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownOnUnsuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ThrowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* ThrowBlendSpaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment ThrowVoiceComment;
    
    USBZThrownWeaponAISchematic();
};

