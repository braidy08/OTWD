#pragma once
#include "CoreMinimal.h"
#include "OTWDMonsterClosetBreachedSignatureDelegate.h"
#include "OTWDSpawnRegion.h"
#include "OTWDMonsterCloset.generated.h"

class AActor;
class UChildActorComponent;
class USBZBaseSpawnBehaviour;

UCLASS(Blueprintable)
class OTWD_API AOTWDMonsterCloset : public AOTWDSpawnRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMonsterClosetBreachedSignature OnBreached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterForHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ClosetAttachmentComponent;
    
public:
    AOTWDMonsterCloset(const FObjectInitializer& ObjectInitializer);

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

