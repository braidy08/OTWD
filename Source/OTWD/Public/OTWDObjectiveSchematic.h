#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZObjectiveSchematic -FallbackName=SBZObjectiveSchematic
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

