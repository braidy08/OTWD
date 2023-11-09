#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDActiveBountySlotData.h"
#include "OTWDBountyList.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDQuestRewards.h"
#include "OTWDQuestDataAssetRoot.generated.h"

class UOTWDQuestDataAsset;
class USBZMissionReward;

UCLASS(Blueprintable, Const)
class UOTWDQuestDataAssetRoot : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UOTWDQuestDataAsset>> WeeklyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionReward*> WeeklyMissionRewardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDQuestRewards DeafultWeeklyReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDActiveBountySlotData> BountySlotData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDBountyList BountyListsPerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfActiveBounties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency BountyReward;
    
    UOTWDQuestDataAssetRoot();
};

