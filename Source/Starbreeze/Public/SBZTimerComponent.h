#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCompletedDelegate.h"
#include "OnTimeReachedDelegate.h"
#include "SBZTimerComponent.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZTimerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeReached OnTimeReached;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TimeReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMilliseconds;
    
public:
    USBZTimerComponent();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateText(const FString& Text);
    
public:
    UFUNCTION(BlueprintCallable)
    void TimeSet(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void TimeIncrease(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void TimeDecrease(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void Speed(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable)
    void AttachTextComponent(UTextRenderComponent* TextRender);
    
};

