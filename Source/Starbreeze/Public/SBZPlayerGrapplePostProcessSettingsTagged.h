#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrapplePostProcessSettings.h"
#include "SBZPlayerGrapplePostProcessSettingsTagged.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrapplePostProcessSettingsTagged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EnemyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessSettings Settings;
    
    FSBZPlayerGrapplePostProcessSettingsTagged();
};

