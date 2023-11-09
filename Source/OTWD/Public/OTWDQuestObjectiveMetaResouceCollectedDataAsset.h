#pragma once
#include "CoreMinimal.h"
#include "OTWDQuestObjectiveBaseDataAsset.h"
#include "OTWDQuestObjectiveMetaResouceCollectedDataAsset.generated.h"

UCLASS(Blueprintable)
class UOTWDQuestObjectiveMetaResouceCollectedDataAsset : public UOTWDQuestObjectiveBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMetaScrapCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMetaProvisionCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMetaEquipmentCollected;
    
    UOTWDQuestObjectiveMetaResouceCollectedDataAsset();
};

