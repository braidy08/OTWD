#pragma once
#include "CoreMinimal.h"
#include "ActVariations.generated.h"

class USBZActAnimationSetSchematic;

USTRUCT(BlueprintType)
struct FActVariations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZActAnimationSetSchematic*> Variations;
    
    STARBREEZE_API FActVariations();
};

