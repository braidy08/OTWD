#pragma once
#include "CoreMinimal.h"
#include "SBZAutoPickUpItemPerItemGameplayEffect.h"
#include "SBZSchematic.h"
#include "Templates/SubclassOf.h"
#include "SBZInventoryItemManagementSchematic.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZInventoryItemManagementSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayEffect>, FSBZAutoPickUpItemPerItemGameplayEffect> AddedResourcesPerItemGameplayEffect;
    
    USBZInventoryItemManagementSchematic();
};

