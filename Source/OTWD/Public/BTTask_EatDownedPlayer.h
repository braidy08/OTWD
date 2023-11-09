#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_EatDownedPlayer.generated.h"

class ASBZAICharacter;
class ASBZAIController;
class UBlackboardComponent;

UCLASS(Blueprintable)
class OTWD_API UBTTask_EatDownedPlayer : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAIController* SBZAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogicBlockerAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* LocalBlackboardComp;
    
    UBTTask_EatDownedPlayer();
    UFUNCTION(BlueprintCallable)
    void OnDefeatUnpinned();
    
};

