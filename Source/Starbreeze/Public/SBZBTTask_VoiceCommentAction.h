#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBZVoiceComment.h"
#include "SBZBTTask_VoiceCommentAction.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_VoiceCommentAction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment SystemComment;
    
    USBZBTTask_VoiceCommentAction();
};

