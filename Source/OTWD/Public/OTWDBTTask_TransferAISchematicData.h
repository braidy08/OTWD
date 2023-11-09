#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_TransferAISchematicDataBase.h"
#include "OTWDBTTask_TransferAISchematicData.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDBTTask_TransferAISchematicData : public USBZBTTask_TransferAISchematicDataBase {
    GENERATED_BODY()
public:
    UOTWDBTTask_TransferAISchematicData();
};

