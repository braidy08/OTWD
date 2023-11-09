#pragma once
#include "CoreMinimal.h"
#include "SBZGlobalVoiceCommentPermission.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGlobalVoiceCommentPermission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSBZGlobalVoiceCommentPermission();
};

