#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsRecoveringFromShove.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTDecorator_IsRecoveringFromShove : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReset;
    
    UBTDecorator_IsRecoveringFromShove();
};

