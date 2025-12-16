#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZOnlineSession -FallbackName=SBZOnlineSession
#include "OnOnlineCharacterChangedEventDelegateDelegate.h"
#include "OnRewardsUpdatedDelegate.h"
#include "OnStatsUpdatedDelegate.h"
#include "OTWDOnlineSession.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDOnlineSession : public USBZOnlineSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardsUpdated OnRewardsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatsUpdated OnStatsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineCharacterChangedEventDelegate OnOnlineCharacterChanged;
    
    UOTWDOnlineSession();

};

