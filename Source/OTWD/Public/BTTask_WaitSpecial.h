#pragma once
#include "CoreMinimal.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_WaitSpecial.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_WaitSpecial : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UBTTask_WaitSpecial();
};

