#pragma once
#include "CoreMinimal.h"
#include "OTWDMissionState.h"
#include "Templates/SubclassOf.h"
#include "OTWDHubGameState.generated.h"

class ASBZWeapon;

UCLASS(Blueprintable)
class OTWD_API AOTWDHubGameState : public AOTWDMissionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWeapon> HolsteredWeapon;
    
    AOTWDHubGameState();
};

