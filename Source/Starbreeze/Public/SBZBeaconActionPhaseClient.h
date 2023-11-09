#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZOnlineCode.h"
#include "SBZLobbyCharacterInfo.h"
#include "SBZMissionEndContextHandle.h"
#include "SBZOnlineBeaconClient.h"
#include "SBZSelectedMissionInfo.h"
#include "SBZBeaconActionPhaseClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZBeaconActionPhaseClient : public ASBZOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharactersInfo, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfo> PlayersInfo;
    
    ASBZBeaconActionPhaseClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerInfo(const FSBZLobbyCharacterInfo& PlayerInfo);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReserveSlot(const TArray<FUniqueNetIdRepl>& InPlayerIds);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyStartTravel(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharactersInfo();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyMissionEnd(const FSBZMissionEndContextHandle& ContextHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClientTravelConnectionTimeout();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartTravelAck(const ESBZOnlineCode& Result);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReserveSlotAck(bool bWasSuccessful, const FSBZSelectedMissionInfo& HostMissionInfo);
    
};

