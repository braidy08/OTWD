#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETwitchVoteEndType.h"
#include "ETwitchVoteOptions.h"
#include "MessageReceivedDelegate.h"
#include "TwitchUIUpdateDelegate.h"
#include "VoteChangedDelegate.h"
#include "VoteEndedDelegate.h"
#include "TwitchCore.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UTwitchCore : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMessageReceived OnMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVoteEnded OnVoteEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVoteChanged OnVoteChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTwitchUIUpdate OnTwitchUIChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString OAuthToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwitchFlag;
    
    UTwitchCore();
    UFUNCTION(BlueprintCallable)
    void SetUserInfo(const FString& InoAuth, const FString& InUsername, const FString& InChannel);
    
    UFUNCTION(BlueprintCallable)
    bool SendIRCMessage(const FString& InMessage, bool bSendToChannel, const FString& InChannel);
    
    UFUNCTION(BlueprintCallable)
    void OpenVote(const TArray<ETwitchVoteOptions>& InVoteOptions, float InDuration, int32 InMaxVotes);
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    bool Connect(FString& OutError);
    
    UFUNCTION(BlueprintCallable)
    void CloseVote(ETwitchVoteEndType InEndType);
    
    UFUNCTION(BlueprintCallable)
    bool AuthenticateTwitchIRC(FString& OutError);
    
};

