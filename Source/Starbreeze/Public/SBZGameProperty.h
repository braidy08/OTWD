#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnPropertyValueChangedDelegate.h"
#include "SBZGameProperty.generated.h"

UCLASS(Abstract, Blueprintable, Within=SBZPropertyComponent)
class STARBREEZE_API USBZGameProperty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyValueChanged OnValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentValue, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentValue, meta=(AllowPrivateAccess=true))
    float Modifier;
    
public:
    USBZGameProperty();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(float InCurrentValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentValue(float PreviousValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseValue() const;
    
    UFUNCTION(BlueprintCallable)
    void AddValue(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddModifier(const float Amount);
    
};

