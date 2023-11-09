#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZBTTask_GetWanderLocation_Method.h"
#include "SBZSpawnRegion.h"
#include "OTWDSpawnRegion.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class AOTWDSpawnRegion : public ASBZSpawnRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrowd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WanderDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_GetWanderLocation_Method WanderMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddZombiesToHorde;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RoamingVolume;
    
public:
    AOTWDSpawnRegion();
};

