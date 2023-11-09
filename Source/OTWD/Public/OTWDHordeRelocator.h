#pragma once
#include "CoreMinimal.h"
#include "OTWDSpawnRegion.h"
#include "OTWDHordeRelocator.generated.h"

class AActor;
class USBZBaseSpawnBehaviour;

UCLASS(Abstract, Blueprintable)
class OTWD_API AOTWDHordeRelocator : public AOTWDSpawnRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRelocatorEnabled;
    
public:
    AOTWDHordeRelocator();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRelocatorEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetAttachedRelocatorsEnabled(const AActor* ParentActor, bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsRelocatorEnabled();
    
};

