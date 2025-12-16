#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "SBZDecoyAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZDecoyAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecoyRange;
    
    USBZDecoyAttributeSet();

    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDecoyRangeAttribute();
    
};

