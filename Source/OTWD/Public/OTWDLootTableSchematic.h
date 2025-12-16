#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZLootTableSchematic -FallbackName=SBZLootTableSchematic
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

