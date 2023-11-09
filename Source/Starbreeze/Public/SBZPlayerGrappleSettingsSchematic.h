#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleAudioProperties.h"
#include "SBZGrappleGameplayTags.h"
#include "SBZGrappleShoveProperties.h"
#include "SBZGrappleUIProperties.h"
#include "SBZPlayerGameplayEffect.h"
#include "SBZPlayerGrappleMiscellaneous.h"
#include "SBZPlayerGrapplePostProcessSettings.h"
#include "SBZPlayerGrapplePostProcessSettingsTagged.h"
#include "SBZPlayerGrappleStabbingAnimationSettingsTagged.h"
#include "SBZPlayerGrappleStruggleSettingsCollection.h"
#include "SBZPlayerGrappleStruggleSettingsCollectionTagged.h"
#include "SBZPlayerTakedownSettings.h"
#include "SBZPlayerTakedownTargetSettings.h"
#include "SBZPlayerTakedownTargetSettingsWithGameplayTag.h"
#include "SBZSchematic.h"
#include "SBZPlayerGrappleSettingsSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerGrappleSettingsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStruggleSettingsCollection DefaultStruggleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerGrappleStruggleSettingsCollectionTagged> SpecialStruggleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerGrappleStabbingAnimationSettingsTagged> StabbingAnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerTakedownTargetSettings> TakedownTargetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerTakedownTargetSettingsWithGameplayTag> TakedownTargetSettingsTagged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerTakedownSettings TakedownGrappleConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DofDistanceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessSettings GrapplePostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerGrapplePostProcessSettingsTagged> SpecialGrapplePostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessSettings AttackingTakedownPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleShoveProperties ShoveProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleUIProperties UIProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleAudioProperties AudioProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleMiscellaneous Miscellaneous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleGameplayTags GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerGameplayEffect> GrappleDurationGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerGameplayEffect> PostGrappleGameplayEffects;
    
    USBZPlayerGrappleSettingsSchematic();
};

