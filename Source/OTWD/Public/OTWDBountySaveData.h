#pragma once
#include "CoreMinimal.h"
#include "SBZSaveData.h"
#include "OTWDBountyList.h"
#include "OTWDBountySaveData.generated.h"

class UOTWDQuestDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDBountySaveData : public USBZSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDBountyList AvailableBountyListsPerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDQuestDataAsset*> AvailableDailyBounties;
    
    UOTWDBountySaveData();
};

