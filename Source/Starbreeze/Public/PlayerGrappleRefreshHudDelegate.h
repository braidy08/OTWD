#pragma once
#include "CoreMinimal.h"
#include "PlayerGrappleRefreshHudDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerGrappleRefreshHud, bool, bShowAttackPrompt, bool, bShowShovePrompt);

