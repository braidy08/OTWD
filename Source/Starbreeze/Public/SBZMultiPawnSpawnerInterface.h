#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "SBZPawnSpawnData.h"
#include "SBZMultiPawnSpawnerInterface.generated.h"

class APawn;
class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class STARBREEZE_API USBZMultiPawnSpawnerInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZMultiPawnSpawnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    virtual void SpawnWithDataLatent(const UObject* WorldContextObject, const TArray<FSBZPawnSpawnData>& SpawnData, FLatentActionInfo LatentInfo) PURE_VIRTUAL(SpawnWithDataLatent,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SpawnWithData(const TArray<FSBZPawnSpawnData>& SpawnData, TArray<APawn*>& OutPawns) PURE_VIRTUAL(SpawnWithData,);
    
};

