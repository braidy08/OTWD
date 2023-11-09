#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineSession.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EOnlineSessionInfo.h"
#include "ESBZButtonInputType.h"
#include "ESBZOnlineSessionPhase.h"
#include "ESBZOnlineSessionRequestType.h"
#include "OnInviteProcessingBeginDelegateDelegate.h"
#include "OnOnlinePlatformErrorDelegateDelegate.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "OnOnlineUiEventDelegateDelegate.h"
#include "OnOnlineUiMatchRejectedEventDelegateDelegate.h"
#include "OnPlayerMutedDelegate.h"
#include "OnPlayerTalkingChangedDelegate.h"
#include "OnlinePartyJoinTypeUpdatedDelegateDelegate.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZOnlineMatchmakingParams.h"
#include "SBZOnlineSearchResult.h"
#include "SBZOnlineSession.generated.h"

class USBZAvatarCache;
class USBZChat;
class USBZHostMigration;
class USBZInvites;
class USBZKickingManager;
class USBZLobby;
class USBZLobbyLocalState;
class USBZMatchmaking;
class USBZParty;
class USBZPopupWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlinePlatformErrorDelegate OnOnlinePlatformError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnBecamePartyHost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnBecamePartyClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLeftParty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlinePartyJoinTypeUpdatedDelegate OnLocalPartyJoinTypeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInviteProcessingBeginDelegate OnInviteProcessingBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnInviteProcessingFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchmakingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchOutdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiMatchRejectedEventDelegate OnMatchRejectedWithReason;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchRestartRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchmAcceptUnlock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnLobbyWaitPlayersCountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnLobbyWaitGameCountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnWaitOtherPlayersStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnMatchmakingStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLobbyComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLocalClientReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnNetworkError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLobbyStateUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTalkingChanged OnPlayerTalking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMuted OnPlayerMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZHostMigration* HostMigration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZParty* Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLobby* Lobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChat* Chat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInvites* Invites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZKickingManager* KickingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMatchmaking* Matchmaking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSearchKeyword;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostPartyByDefault;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPopupWidget* OnlinePlatformErrorPopup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionRequestTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAvatarCache* AvatarCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZOnlineSearchResult> SearchResults;
    
public:
    USBZOnlineSession();
    UFUNCTION(BlueprintCallable)
    void StopMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalClientReady(bool bIsClientReady);
    
    UFUNCTION(BlueprintCallable)
    void RequestMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalClientReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPhaseHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPhaseClient() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnlinePlatformErrorPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnlinePlatformError(ESBZOnlineSessionRequestType RequestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZLobbyCharacterInfoUi> GetUiLobbyInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineSessionPhase GetSessionPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionInfo GetSessionInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerDisplayName(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyMembersCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyTimeout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLobbyLocalState* GetLobbyState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoundPlayersCount();
    
};

