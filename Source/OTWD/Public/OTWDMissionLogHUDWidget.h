#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "OTWDMissionLogHUDWidget.generated.h"

class UAkAudioEvent;
class UOTWDQuestDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDMissionLogHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DisplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShowLogSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseLogSoundEvent;
    
public:
    UOTWDMissionLogHUDWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnQuestUpdated(const UOTWDQuestDataAsset* QuestData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLogStatusUpdated(bool bIsVisible, bool bShouldSetup);
    
};

