#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_ActBase.h"
#include "SBZBTTask_PlayAnimationAct.generated.h"

class USBZAnimationAct;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_PlayAnimationAct : public USBZBTTask_ActBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAnimationAct* ActToPlay;
    
    USBZBTTask_PlayAnimationAct();
};

