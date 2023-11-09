#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZWeaponCaliberData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponCaliberData : public FTableRowBase {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZWeaponCaliberData();
};

