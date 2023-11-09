#pragma once
#include "CoreMinimal.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_Stop.generated.h"

class AZombieAIController;

UCLASS(Blueprintable)
class OTWD_API UBTTask_Stop : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZombieAIController* AI_Con_Ref;
    
    UBTTask_Stop();
};

