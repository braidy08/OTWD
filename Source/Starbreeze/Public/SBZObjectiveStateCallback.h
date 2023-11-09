#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectiveStateUpdatedDelegate.h"
#include "SBZObjectiveStateCallback.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZObjectiveStateCallback : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveStateUpdated ObjectiveStateDelegate;
    
    USBZObjectiveStateCallback();
};

