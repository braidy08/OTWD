#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBZShutterState.h"
#include "OnAnimationFinishedDelegate.h"
#include "OnAnimationStartedDelegate.h"
#include "OnShutterAnimationEventDelegate.h"
#include "OnShutterFullyClosedDelegate.h"
#include "OnShutterFullyOpenedDelegate.h"
#include "OnShutterStateChangedDelegate.h"
#include "SBZShutterAnimationEvent.h"
#include "SBZShutter.generated.h"

class UCurveFloat;
class USBZNavModifierBoxComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZShutter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationStarted OnAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationFinished OnAnimationFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShutterStateChanged OnShutterStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShutterFullyOpened OnShutterFullyOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShutterFullyClosed OnShutterFullyClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShutterAnimationEvent OnShutterAnimationEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialOpenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutterHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationTriggerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShutterSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoveOnRelativeXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoveOnRelativeYAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoveOnRelativeZAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutterShoveRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavModifierBoxComponent* NavModifierComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZShutterAnimationEvent> ShutterAnimationEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox CachedShoveBoxVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedShoveMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* AnimationPositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationPositionCurveMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationPositionCurveMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PercentageOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimateToValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAnimating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZShutterState ShutterState;
    
public:
    ASBZShutter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOpenPercentage(float InOpenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZShutterState GetShutterState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShutterHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpenPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllAnimationEvents();
    
    UFUNCTION(BlueprintCallable)
    void AnimateWithCurve(UCurveFloat* InAnimationCurve);
    
    UFUNCTION(BlueprintCallable)
    void AnimateToOpenPercentageIn(float InOpenPercentage, float TimeToAnimate);
    
    UFUNCTION(BlueprintCallable)
    void AnimateToOpenPercentage(float InOpenPercentage, float InOpenSpeed);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimationEvent(const FSBZShutterAnimationEvent& InAnimationEvent);
    
};

