#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/LatentActionManager.h"
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
    virtual void SpawnWithData(UPARAM(Ref) TArray<FSBZPawnSpawnData>& SpawnData, TArray<APawn*>& OutPawns) PURE_VIRTUAL(SpawnWithData,);
    
};

