#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZGrappleParticipantType.h"
#include "ESBZGrappleState.h"
#include "SBZAIClassGrappleStruggleSettings.h"
#include "SBZGrappleAlignmentSettings.h"
#include "SBZGrappleEventSettings.h"
#include "SBZGrappleKnifePenetrationEffectSettings.h"
#include "SBZGrappleStruggleSettings.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZGrappleManager.generated.h"

class ASBZAICharacter;
class ASBZCharacter;
class ASBZGrappleManager;
class UObject;
class USBZBaseGrappleAnimationSchematic;
class USBZGrappleEvent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZGrappleManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrappleAlignmentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseGrappleAnimationSchematic*> GrappleAnimationSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAIClassGrappleStruggleSettings> AIStruggleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleKnifePenetrationEffectSettings KnifePenetrationEffectsIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleKnifePenetrationEffectSettings KnifePenetrationEffectsOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bDoKnifePenetrationDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGrappleEvent*> EventPool;
    
public:
    ASBZGrappleManager();
    UFUNCTION(BlueprintCallable)
    bool RequestGrapple(AActor* Attacker, AActor* Victim, const FSBZGrappleEventSettings& GrappleConfig, const FSBZGrappleAlignmentSettings& AlignmentSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnGrappleAnimationEnded(AActor* Participant, ESBZGrappleState AnimationState);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ShoveOff(AActor* InInstigator, ASBZCharacter* Target, const FSBZHurtReactionPrediction& InHurtReactionPrediction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RemoveParticipant(AActor* Actor, bool bEndEventIfMainParticipant);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_InitGrappleEvent(int32 EventID, AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, float AlignmentDuration, const TArray<int32>& VictimAlignIDs, const TArray<int32>& AttackerAlignIDs);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ForceEndEvent(int32 EventID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_EndStruggle(int32 EventID, ESBZGrappleParticipantType Winner);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AddAttacker(int32 EventID, AActor* AddActor, float AlignDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorPartOfGrapple(AActor* Actor, int32& OutEventID, bool& OutIsPending) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorGrappleVictim(AActor* Actor, int32& OutEventID, bool& OutIsPending) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorGrappleAttacker(AActor* Actor, int32& OutEventID, bool& OutIsPending) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStruggleSettingsForAI(ASBZAICharacter* AICharacter, FSBZGrappleStruggleSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    ESBZGrappleState GetParticipantState(AActor* Participant);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOpponent(const AActor* Participant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZGrappleManager* GetGrappleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EndStruggleByID(int32 EventID, ESBZGrappleParticipantType Winner);
    
    UFUNCTION(BlueprintCallable)
    bool AddAttackerToGrapple(int32 GrappleEventID, AActor* Attacker, float MaxDistance, float PositionAlignmentSpeed, bool bFullAdd);
    
};

