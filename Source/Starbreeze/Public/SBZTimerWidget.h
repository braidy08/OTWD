#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZTimerWidget.generated.h"

class AGameStateBase;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZTimerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseServerWorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PausedTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameStateBase* GameState;
    
public:
    USBZTimerWidget();
    UFUNCTION(BlueprintCallable)
    void SetTimeStampAsCurrentWorldTime(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeStamp(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bInPaused);
    
    UFUNCTION(BlueprintCallable)
    void OffsetTimeStamp(float OffsetBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeElapsed() const;
    
};

