#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAutoPickUpItemCount.h"
#include "SBZSchematic.h"
#include "SBZLootTableSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLootTableSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAutoPickUpItemCount> GameplayPickUpLoot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval ContainerLootAmountRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlreadyLootedRatio;
    
    USBZLootTableSchematic();
};

