#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZGameSession.generated.h"

class AController;
class APlayerState;

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API ASBZGameSession : public AGameSession {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRegisterDelegate, APlayerState*, PlayerState);
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingCheckPeriod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHighPingCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPingThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotReservationTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingTimeout;
    
public:
    ASBZGameSession();
private:
    UFUNCTION(BlueprintCallable)
    void UnregisterTravelingClient(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(BlueprintCallable)
    void TryToFreeSlot(FUniqueNetIdRepl ReservedPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerRemoved(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerPossesed(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerJoined(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayersPing();
    
};

