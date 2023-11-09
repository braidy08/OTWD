#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZLobbyCharacterInfo.h"
#include "SBZOnlineBeaconClient.h"
#include "SBZSelectedMissionInfo.h"
#include "SBZLobbyBeaconClient.generated.h"

class ASBZLobbyRemoteState;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZLobbyBeaconClient : public ASBZOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyState, meta=(AllowPrivateAccess=true))
    ASBZLobbyRemoteState* LobbyState;
    
    ASBZLobbyBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePlayerInfo(const FSBZLobbyCharacterInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerReadyToTravel(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerReady(const FUniqueNetIdRepl& InPlayerId, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerAcceptedMatch(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReserveSlot(const TArray<FUniqueNetIdRepl>& InPlayerIds);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopWaitingOtherPlayers();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReserveSlotAck(bool bWasSuccessful, const FSBZSelectedMissionInfo& HostMissionInfo);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMoveToServer();
    
};

