#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_TransferAISchematicDataBase.h"
#include "OTWDBTTask_TransferZombieAISchematicData.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDBTTask_TransferZombieAISchematicData : public USBZBTTask_TransferAISchematicDataBase {
    GENERATED_BODY()
public:
    UOTWDBTTask_TransferZombieAISchematicData();
};

