#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "SBZSpecLevelMagnitude.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZSpecLevelMagnitude : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    USBZSpecLevelMagnitude();

};

