#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Blueprint/UserWidget.h"
#include "SBZAttributeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAttributeWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> GameplayAttributes;
    
public:
    USBZAttributeWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(const FGameplayAttribute& Attribute, float InitValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttributeUpdate(const FGameplayAttribute& Attribute, float OldValue, float NewValue);
    
};

