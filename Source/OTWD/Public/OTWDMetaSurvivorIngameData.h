#pragma once
#include "CoreMinimal.h"
#include "OTWDMetaSurvivorIngameData.generated.h"

class UOTWDMetaSurvivorReward;
class UOTWDSurvivorVoiceDataAsset;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDMetaSurvivorIngameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetaSurvivorReward* MissionReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDSurvivorVoiceDataAsset> Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesRescuingUnlockVendor;
    
    FOTWDMetaSurvivorIngameData();
};

