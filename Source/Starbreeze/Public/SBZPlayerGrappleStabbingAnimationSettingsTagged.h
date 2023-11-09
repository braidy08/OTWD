#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleStabbingAnimationSettings.h"
#include "SBZPlayerGrappleStabbingAnimationSettingsTagged.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleStabbingAnimationSettingsTagged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EnemyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStabbingAnimationSettings Settings;
    
    FSBZPlayerGrappleStabbingAnimationSettingsTagged();
};

