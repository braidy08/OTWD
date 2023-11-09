#pragma once
#include "CoreMinimal.h"
#include "SBZAlertManagerActorData.generated.h"

class ASBZHumanAICharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertManagerActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHumanAICharacter* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 AlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AlertProgress;
    
    FSBZAlertManagerActorData();
};

