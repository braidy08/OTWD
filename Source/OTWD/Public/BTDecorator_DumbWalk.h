#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_DumbWalk.generated.h"

UCLASS(Blueprintable, Config=Engine)
class OTWD_API UBTDecorator_DumbWalk : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDumbWalk;
    
    UBTDecorator_DumbWalk();
};

