#pragma once
#include "CoreMinimal.h"
#include "OTWDSpawnRegion.h"
#include "OTWDMonsterCloset.generated.h"

class AActor;
class AOTWDMonsterCloset;
class UBoxComponent;
class UChildActorComponent;
class USBZBaseSpawnBehaviour;

UCLASS(Blueprintable)
class OTWD_API AOTWDMonsterCloset : public AOTWDSpawnRegion {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOTWDMonsterClosetBreachedSignature, AOTWDMonsterCloset*, MonsterCloset);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMonsterClosetBreachedSignature OnBreached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterForHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ProximityTriggerBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ClosetAttachmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    AOTWDMonsterCloset();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMonsterClosetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetAttachedMonsterClosetsEnabled(const AActor* ParentActor, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PerformBreach();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnBreachEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsMonsterClosetEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasHordeSpawnedHere();
    
};

