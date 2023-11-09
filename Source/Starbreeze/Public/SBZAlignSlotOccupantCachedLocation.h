#pragma once
#include "CoreMinimal.h"
#include "SBZAlignSlotOccupantCachedLocation.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZAlignSlotOccupantCachedLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    STARBREEZE_API FSBZAlignSlotOccupantCachedLocation();
};

