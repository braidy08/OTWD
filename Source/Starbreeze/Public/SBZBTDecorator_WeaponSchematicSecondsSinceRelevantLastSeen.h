#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ESBZNumericComparison.h"
#include "SBZPropertyProvider.h"
#include "SBZBTDecorator_WeaponSchematicSecondsSinceRelevantLastSeen.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_WeaponSchematicSecondsSinceRelevantLastSeen : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumericComparison ComparisonMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropertyProvider Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinouslyCheckCondition;
    
public:
    USBZBTDecorator_WeaponSchematicSecondsSinceRelevantLastSeen();
};

