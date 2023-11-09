#pragma once
#include "CoreMinimal.h"
#include "SBZTimerInfo.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct FSBZTimerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    STARBREEZE_API FSBZTimerInfo();
};

