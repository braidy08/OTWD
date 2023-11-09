#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_FiringPermissionReleaseToken.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_FiringPermissionReleaseToken : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTokenForUsingWeapon;
    
    USBZBTTask_FiringPermissionReleaseToken();
};

