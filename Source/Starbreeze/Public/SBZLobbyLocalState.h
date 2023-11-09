#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AsyncChangeLoadoutPayload.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZLobbyLocalState.generated.h"

class UTexture2D;

UCLASS(Blueprintable, NotPlaceable, Transient)
class STARBREEZE_API USBZLobbyLocalState : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyEventDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEventDelegate OnPlayerCountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayerIds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEventDelegate OnSomeoneAcceptedMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEventDelegate OnPlayerLeftMatch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfoUi> PlayerInfos;
    
public:
    USBZLobbyLocalState();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteAsyncChangeLoadout(FGuid RequestID, FAsyncChangeLoadoutPayload Payload, FUniqueNetIdRepl PlayerUId);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadoutChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateLeft(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateEnter(FName StateName);
    
public:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPlayerAvatar(int32 PlayerIndex);
    
};

