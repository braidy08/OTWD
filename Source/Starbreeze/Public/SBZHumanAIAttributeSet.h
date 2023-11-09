#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZHumanAIAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZHumanAIAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMultiplier;
    
    USBZHumanAIAttributeSet();
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetAccuracyMultiplierAttribute();
    
};

