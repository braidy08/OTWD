#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZInventoryItemSchematic.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDInventoryItemSchematic.generated.h"

UCLASS(Blueprintable)
class UOTWDInventoryItemSchematic : public USBZInventoryItemSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency MetagameCurrencyRewards;
    
    UOTWDInventoryItemSchematic();

};

