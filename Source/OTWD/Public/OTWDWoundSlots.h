#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OTWDWoundSlots.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWoundSlots {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 WoundSlots[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LastImpulse;
    
    FOTWDWoundSlots();
};

