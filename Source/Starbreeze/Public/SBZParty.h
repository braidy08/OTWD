#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZOnlineCode.h"
#include "SBZOnlineSessionParams.h"
#include "SBZPartyData.h"
#include "SBZParty.generated.h"

class AOnlineBeaconHost;
class ASBZPartyBeaconClient;
class ASBZPartyBeaconHost;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NotPlaceable, Transient, Config=Starbreeze)
class STARBREEZE_API USBZParty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPartyBeaconClient* PartyClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPartyBeaconHost* PartyHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHost* PartyOnlineBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPartyData State;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartyRestoreTimeout;
    
public:
    USBZParty();
    UFUNCTION(BlueprintCallable)
    void UpdatePartyState(const FSBZPartyData& InPartyState);
    
private:
    UFUNCTION(BlueprintCallable)
    void JoinPartyComplete(const ESBZOnlineCode& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void HostPartySession(const FSBZOnlineSessionParams& Params);
    
private:
    UFUNCTION(BlueprintCallable)
    void HostPartyComplete(const ESBZOnlineCode& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateLeft(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateEnter(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    FSBZPartyData GetPartyData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CancelPartyRestore();
    
};

