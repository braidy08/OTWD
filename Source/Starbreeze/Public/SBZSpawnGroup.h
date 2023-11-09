#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESpawnActivationType.h"
#include "SBZSpawnerBase.h"
#include "SBZSpawnGroup.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZSpawnGroup : public ASBZSpawnerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRotationOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval NumberToSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActivationType ActivationType;
    
    ASBZSpawnGroup();
    UFUNCTION(BlueprintCallable)
    void SetMinNumberToSpawn(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNumberToSpawn(int32& Min, int32& Max) const;
    
    UFUNCTION(BlueprintCallable)
    void GetLastSpawnedPawns(TArray<APawn*>& OutPawns);
    
};

