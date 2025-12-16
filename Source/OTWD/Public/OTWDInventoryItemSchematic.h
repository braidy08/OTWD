#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZInventoryItemSchematic -FallbackName=SBZInventoryItemSchematic
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

