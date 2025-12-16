#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "SBZAggroAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZAggroAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroBuff;
    
    USBZAggroAttributeSet();

    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetAggroBuffAttribute();
    
};

