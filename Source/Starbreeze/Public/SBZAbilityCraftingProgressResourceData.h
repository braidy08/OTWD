#pragma once
#include "CoreMinimal.h"
#include "SBZAbilityCraftingProgressResourceData.generated.h"

class USBZAbilityCraftingResourceWidget;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAbilityCraftingProgressResourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAbilityCraftingResourceWidget* ResourceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CostToCraft;
    
    FSBZAbilityCraftingProgressResourceData();
};

