#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayerOnlineStatusStruct.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerOnlineStatusStruct : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Nickname;
    
    FSBZPlayerOnlineStatusStruct();
};

