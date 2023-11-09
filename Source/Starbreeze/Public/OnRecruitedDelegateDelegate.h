#pragma once
#include "CoreMinimal.h"
#include "OnRecruitedDelegateDelegate.generated.h"

class USBZAlertnessComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRecruitedDelegate, USBZAlertnessComponent*, Sender, USBZAlertnessComponent*, Recruiter, float, Alertness);

