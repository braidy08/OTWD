#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "SBZPawnSpawnData.h"
#include "SBZSinglePawnSpawnerInterface.generated.h"

class APawn;
class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class STARBREEZE_API USBZSinglePawnSpawnerInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZSinglePawnSpawnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    virtual void SpawnWithDataLatent(UObject* WorldContextObject, const FSBZPawnSpawnData& SpawnData, FLatentActionInfo LatentInfo) PURE_VIRTUAL(SpawnWithDataLatent,);
    
    UFUNCTION(BlueprintCallable)
    virtual APawn* SpawnWithData(const FSBZPawnSpawnData& SpawnData) PURE_VIRTUAL(SpawnWithData, return NULL;);
    
};

