#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Components/SceneComponent.h"
#include "SBZFactionIdHelper.h"
#include "SBZDangerComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UDEPRECATED_SBZDangerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DangerAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DangerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZFactionIdHelper> DangerousTowards;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRegistered;
    
public:
    UDEPRECATED_SBZDangerComponent();
    UFUNCTION(BlueprintCallable)
    void Unregister();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TimerElapsed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Register();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRegistered() const;
    
};

