#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticArray.generated.h"

class USBZCosmetic;

USTRUCT(BlueprintType)
struct FSBZCosmeticArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCosmetic*> Array;
    
    STARBREEZE_API FSBZCosmeticArray();
};

