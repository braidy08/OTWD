#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZAttributeSetOverflowBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZAttributeSetOverflowBase : public UAttributeSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayAttribute, float> OverflowAttributes;
    
public:
    USBZAttributeSetOverflowBase();
};

