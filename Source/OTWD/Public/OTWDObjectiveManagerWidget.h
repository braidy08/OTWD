#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OTWDObjectiveEvent.h"
#include "OTWDObjectiveManagerWidget.generated.h"

class AOTWDObjectiveManager;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDObjectiveManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NewObjectiveSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UpdatedObjectiveSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SideCompleteSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GlobalCompleteSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MainCompleteSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailedObjectiveSoundEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDObjectiveManager* ObjectiveManager;
    
public:
    UOTWDObjectiveManagerWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveTimerElapsedInternal(const FOTWDObjectiveEvent& ObjectiveEvent, float RemainingTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveTimerElapsed(const FOTWDObjectiveEvent& ObjectiveEvent, float RemainingTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStateChangedInternal(const FOTWDObjectiveEvent& ObjectiveEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveStateChanged(const FOTWDObjectiveEvent& ObjectiveEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveManagerReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveFailedInternal(const FOTWDObjectiveEvent& ObjectiveEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveFailed(const FOTWDObjectiveEvent& ObjectiveEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveDisabledInternal(const FOTWDObjectiveEvent& ObjectiveEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveDisabled(const FOTWDObjectiveEvent& ObjectiveEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveCompletedInternal(const FOTWDObjectiveEvent& ObjectiveEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveCompleted(const FOTWDObjectiveEvent& ObjectiveEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveActivatedInternal(const FOTWDObjectiveEvent& ObjectiveEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveActivated(const FOTWDObjectiveEvent& ObjectiveEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMissionStateReady();
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalObjectiveTextChangedInternal(const FText& GlobalObjectiveText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGlobalObjectiveTextChanged(const FText& GlobalObjectiveText);
    
};

