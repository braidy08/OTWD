#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KilledPawnDelegateDelegate.h"
#include "SBZPlatformSpawnSettings.h"
#include "SBZSpawnManager.generated.h"

class APawn;
class USBZSpawnManager;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSpawnManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKilledPawnDelegate OnManagedPawnKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlatformSpawnSettings PlatformSpawningSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PendingDestroyedPawns;
    
public:
    USBZSpawnManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSpawnManager* Get(const UObject* WorldContextObject);
    
};

