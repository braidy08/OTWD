#pragma once
#include "CoreMinimal.h"
#include "SBZLootTableSchematic.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDLootTableSchematic.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDLootTableSchematic : public USBZLootTableSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency MetagameCurrency;
    
    UOTWDLootTableSchematic();
};

