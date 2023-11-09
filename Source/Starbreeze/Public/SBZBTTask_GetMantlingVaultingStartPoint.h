#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_GetMantlingVaultingStartPoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_GetMantlingVaultingStartPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEndPoint;
    
    USBZBTTask_GetMantlingVaultingStartPoint();
};

