#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZPropertyProvider.h"
#include "SBZBTTask_TransferAISchematicDataBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBTTask_TransferAISchematicDataBase : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropertyProvider PropertyProvider;
    
    USBZBTTask_TransferAISchematicDataBase();
};

