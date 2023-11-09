#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EBTTask_ResetTimer_Operation.h"
#include "SBZBTTask_ResetTimer.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_ResetTimer : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTTask_ResetTimer_Operation Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxDuration;
    
    USBZBTTask_ResetTimer();
};

