#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESBZGrappleParticipantType.h"
#include "ESBZGrappleRequestFailedReason.h"
#include "ESBZGrappleState.h"
#include "SBZGrappleAlignmentSettings.h"
#include "SBZGrappleDamageShoveReaction.h"
#include "SBZGrappleEventSettings.h"
#include "SBZGrappleEventStateProperties.h"
#include "SBZGrappleActorInterface.generated.h"

class AActor;
class USBZDamageType;

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZGrappleActorInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZGrappleActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool ShouldAlwaysSurviveWhenLosingGrapple() PURE_VIRTUAL(ShouldAlwaysSurviveWhenLosingGrapple, return false;);
    
    UFUNCTION()
    virtual void PrePendingGrapple(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(PrePendingGrapple,);
    
    UFUNCTION()
    virtual void PreGrapple(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(PreGrapple,);
    
    UFUNCTION()
    virtual void PostPendingGrappleFailed() PURE_VIRTUAL(PostPendingGrappleFailed,);
    
    UFUNCTION()
    virtual void PostGrapple(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(PostGrapple,);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleStateChanged(ESBZGrappleState NewState, const FSBZGrappleEventStateProperties& EventProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleRequestDenied(ESBZGrappleRequestFailedReason Reason, AActor* Attacker, AActor* Victim, const FSBZGrappleEventSettings& GrappleConfig, const FSBZGrappleAlignmentSettings& AlignmentSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidGrappleOpponent(AActor* InOpponent);
    
    UFUNCTION()
    virtual bool GrappleWantFinisher(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(GrappleWantFinisher, return false;);
    
    UFUNCTION()
    virtual bool GrappleWantExitingState(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(GrappleWantExitingState, return false;);
    
    UFUNCTION()
    virtual bool GrappleUsesCustomDamageNotify() PURE_VIRTUAL(GrappleUsesCustomDamageNotify, return false;);
    
    UFUNCTION()
    virtual bool GrappleShouldSyncEnd(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(GrappleShouldSyncEnd, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GrappleShouldEndOnDamage(const FSBZGrappleEventStateProperties& EventProperties);
    
    UFUNCTION()
    virtual void GrappleKill(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(GrappleKill,);
    
    UFUNCTION()
    virtual bool GrappleKeepAlignmentOnEnd(const FSBZGrappleEventStateProperties& EventProperties) PURE_VIRTUAL(GrappleKeepAlignmentOnEnd, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGrappleDamageShoveReaction(AActor* DamageInstigator, float Damage, const USBZDamageType* DamageType, FSBZGrappleDamageShoveReaction& OutReaction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetGrappleCharacterTags(bool bForAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowedToGrapple(ESBZGrappleParticipantType ParticipantType);
    
};

