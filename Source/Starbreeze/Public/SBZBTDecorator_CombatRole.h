#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBZAIRole.h"
#include "ESBZNumericComparison.h"
#include "SBZBTDecorator_CombatRole.generated.h"

class ASBZHumanAICharacter;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CombatRole : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumericComparison Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIRole CompareRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotifyObserverOnValueChange;
    
    USBZBTDecorator_CombatRole();
    UFUNCTION(BlueprintCallable)
    void OnCombatRoleChanged(ASBZHumanAICharacter* Sender, ESBZAIRole NewRole, ESBZAIRole OldRole);
    
};

