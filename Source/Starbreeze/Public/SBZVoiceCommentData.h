#pragma once
#include "CoreMinimal.h"
#include "SBZGlobalVoiceCommentPermission.h"
#include "SBZVoiceCommentData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZVoiceCommentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGlobalVoiceCommentPermission GlobalPermission;
    
    FSBZVoiceCommentData();
};

