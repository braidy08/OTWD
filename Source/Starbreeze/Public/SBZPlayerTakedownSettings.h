#pragma once
#include "CoreMinimal.h"
#include "SBZAlignmentSlotFlags.h"
#include "SBZPlayerTakedownSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerTakedownSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlignSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleImmunityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignSpeedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignSpeedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlignmentSlotFlags AlignmentFlags;
    
    FSBZPlayerTakedownSettings();
};

