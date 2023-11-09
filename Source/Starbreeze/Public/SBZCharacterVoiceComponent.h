#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZVoiceComment.h"
#include "ESBZVoiceGruntType.h"
#include "ESBZVoicePriority.h"
#include "SBZAIAlertnessComment.h"
#include "SBZAIAlertnessDialogRules.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZRandomDefaultSwitchStates.h"
#include "Templates/SubclassOf.h"
#include "SBZCharacterVoiceComponent.generated.h"

class ASBZCharacter;
class UAkAudioBank;
class UAkAudioEvent;
class UAkComponent;
class USBZAlertnessComponent;
class USBZVoiceCommentConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CharacterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDeathEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DefaultSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRandomDefaultSwitchStates> RandomDefaultSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZVoiceCommentConfig> CommentConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartFatigueEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StopFatigueEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FatigueRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZAIAlertnessComment> AIAlertnessComments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZAIAlertnessDialogRules> AIAlertnessDialogRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RemoveSubtitlePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RemoveSubtitleSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponentVoice;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* SBZCharacterOwner;
    
public:
    USBZCharacterVoiceComponent();
    UFUNCTION(BlueprintCallable)
    void StopTalking();
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SaySystemComment(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority, bool bServerInstigated);
    
    UFUNCTION(BlueprintCallable)
    void SaySystemComment(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority, bool bReplicated, bool bServerInstigated);
    
    UFUNCTION(BlueprintCallable)
    void SayGrunt(ESBZVoiceGruntType GruntType);
    
    UFUNCTION(BlueprintCallable)
    void SayDialogLineByCharacterEvent(FString& CommentState);
    
    UFUNCTION(BlueprintCallable)
    void SayDialogLine(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void SayCharacterEvent(const FString& CommentState, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable)
    void Say(UAkAudioEvent* AudioEvent, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaValueChanged(float NewValue, float OldValue, float MaxValue);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SaySystemComment_ServerInstigated(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SaySystemComment(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority);
    
};

