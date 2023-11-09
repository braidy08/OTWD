#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SBZTagTriggeredMontageActivationData.h"
#include "SBZTagTriggeredMontageMapData.generated.h"

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZTagTriggeredMontageMapData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZTagTriggeredMontageActivationData> Map;
    
    USBZTagTriggeredMontageMapData();
};

