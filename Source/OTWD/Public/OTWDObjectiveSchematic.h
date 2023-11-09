#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveSchematic.h"
#include "OTWDObjectiveSchematic.generated.h"

class UOTWDObjectiveSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDObjectiveSchematic : public USBZObjectiveSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDObjectiveSchematic* ParentObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSideObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySoundOnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySoundOnIncrement;
    
    UOTWDObjectiveSchematic();
};

