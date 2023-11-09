#pragma once
#include "CoreMinimal.h"
#include "OnShowLevelTutorialDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowLevelTutorial, const FName&, TutorialName);

