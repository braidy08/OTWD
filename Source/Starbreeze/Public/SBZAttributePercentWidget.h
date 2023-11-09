#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Blueprint/UserWidget.h"
#include "SBZAttributePercentWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAttributePercentWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ValueGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute MaxGameplayAttribute;
    
public:
    USBZAttributePercentWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(float CurrentValue, float MaxValue, float Percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaxAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage);
    
};

