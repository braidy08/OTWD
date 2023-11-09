#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveStateFlag.h"
#include "SBZObjectiveState.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct FSBZObjectiveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZObjectiveStateFlag StateFlag;
    
    STARBREEZE_API FSBZObjectiveState();
};

