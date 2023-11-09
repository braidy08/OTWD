#pragma once
#include "CoreMinimal.h"
#include "SBZAmmoLootTypes.h"
#include "SBZAutoPickUpItem.h"
#include "SBZAutoPickUpItemAmmo.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZAutoPickUpItemAmmo : public ASBZAutoPickUpItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAmmoLootTypes> LootAmmo;
    
public:
    ASBZAutoPickUpItemAmmo();
};

