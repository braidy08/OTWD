#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZDrawAreaReplicationManager.generated.h"

class ASBZPlayerController;
class ASBZPlayerState;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZDrawAreaReplicationManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* LocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=CheckDrawAreaForBroadcast, meta=(AllowPrivateAccess=true))
    TArray<FName> DrawAreaForBroadcast;
    
public:
    ASBZDrawAreaReplicationManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitLocalPlayerID(ASBZPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOutgoingDataQueue();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckDrawAreaForBroadcast();
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastActionBuffer();
    
};

