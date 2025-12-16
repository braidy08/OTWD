#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "SBZDetectionAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDetectionAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DelayModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TimeModifier;
    
    USBZDetectionAttributeSet();

    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetTimeModifierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDelayModifierAttribute();
    
};

