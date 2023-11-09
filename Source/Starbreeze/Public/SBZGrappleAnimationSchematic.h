#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleParticipantType.h"
#include "SBZBaseGrappleAnimationSchematic.h"
#include "SBZGrappleAnimationCollection.h"
#include "SBZGrappleAnimationSchematic.generated.h"

class USBZBaseAnimation;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGrappleAnimationSchematic : public USBZBaseGrappleAnimationSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZBaseAnimation> AttackerAnimationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZBaseAnimation> VictimAnimationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGrappleParticipantType FirstPersonLegsParticipant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleAnimationCollection AnimationCollection;
    
    USBZGrappleAnimationSchematic();
};

