#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZWeaponConfiguration.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZWeaponConfigurationPartSlot -FallbackName=SBZWeaponConfigurationPartSlot
#include "OTWDLobbyRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLobbyRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponConfiguration> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponConfigurationPartSlot> Parts;
    
    FOTWDLobbyRewardInfo();
};

