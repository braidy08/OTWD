#pragma once
#include "CoreMinimal.h"
#include "OTWDHordeSettings.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDHordeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterClosetMaxPathToConsider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelocatorMaxPathToConsider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelocatorVisibleDisabledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelocatorMinimumDistanceAwayFromPlayers;
    
    FOTWDHordeSettings();
};

