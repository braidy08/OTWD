#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleAdditionalAttackerSettings.h"
#include "SBZPlayerGrappleLookAtAddSettings.h"
#include "SBZPlayerGrappleStabbingSettings.h"
#include "SBZPlayerGrappleStruggleDurationSettings.h"
#include "SBZPlayerGrappleStrugglePenaltySettings.h"
#include "SBZPlayerGrappleStruggleSettingsSwitchFlags.h"
#include "SBZPlayerGrappleStruggleShoveSettings.h"
#include "SBZPlayerGrappleStruggleSettingsCollection.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleStruggleSettingsCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStabbingSettings Stabbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStruggleDurationSettings Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleAdditionalAttackerSettings AdditionalAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleLookAtAddSettings LookAtAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStrugglePenaltySettings NoShovePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStruggleShoveSettings StruggleShoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStruggleSettingsSwitchFlags SettingSwitchFlags;
    
    FSBZPlayerGrappleStruggleSettingsCollection();
};

