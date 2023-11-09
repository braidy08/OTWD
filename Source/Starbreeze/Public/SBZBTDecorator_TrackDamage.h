#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_TrackDamage.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_TrackDamage : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearDamageFlag;
    
    USBZBTDecorator_TrackDamage();
};

