#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_SetSenseProfile.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_SetSenseProfile : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SenseProfileId;
    
public:
    USBZBTTask_SetSenseProfile();
};

