#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZOnlineCode.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZOnlineBeaconHostObject.h"
#include "SBZPartyMemberInfo.h"
#include "SBZPartyBeaconHost.generated.h"

class APlayerState;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZPartyBeaconHost : public ASBZOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOPartyHostUpdatedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnPartyJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOPartyHostUpdatedDelegate OnPartyUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPartyMemberInfo> PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartyTravelTimeout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> TravellingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TravelTimeoutTimer;
    
public:
    ASBZPartyBeaconHost();
    UFUNCTION(BlueprintCallable)
    void NotifyClientFailedConnectionToLobby(const FUniqueNetIdRepl& PartyMemberNetId);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClientConnectedToLobby(const FUniqueNetIdRepl& PartyMemberNetId);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePartyTravelTimeout();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FirePartyUpdated(APlayerState* ChangedPlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastPartyTravelled(ESBZOnlineCode Result);
    
};

