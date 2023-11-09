#pragma once
#include "CoreMinimal.h"
#include "SBZWorldSettings.h"
#include "OTWDHordeSettings.h"
#include "OTWDWorldSettings.generated.h"

class AOTWDCrowdColliderManager;
class AOTWDProgressTrigger;
class UOTWDMissionRewards;
class USBZActorContainer;

UCLASS(Blueprintable)
class OTWD_API AOTWDWorldSettings : public ASBZWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllZombiePawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDHordeSettings HordeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMissionRewards* MissionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AOTWDProgressTrigger>, float> ProgressValueWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionProgressWeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDCrowdColliderManager* CrowdColliderManager;
    
public:
    AOTWDWorldSettings();
};

