#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_HasAggroTarget.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_HasAggroTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckLastDamageInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDamagedTime;
    
    USBZBTDecorator_HasAggroTarget();

};

