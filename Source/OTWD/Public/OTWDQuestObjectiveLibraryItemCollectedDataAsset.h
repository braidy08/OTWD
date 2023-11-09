#pragma once
#include "CoreMinimal.h"
#include "OTWDQuestObjectiveBaseDataAsset.h"
#include "OTWDQuestObjectiveLibraryItemCollectedDataAsset.generated.h"

class UOTWDLibraryItemData;

UCLASS(Blueprintable)
class UOTWDQuestObjectiveLibraryItemCollectedDataAsset : public UOTWDQuestObjectiveBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDLibraryItemData* LibraryItemToCollect;
    
    UOTWDQuestObjectiveLibraryItemCollectedDataAsset();
};

