#pragma once
#include "CoreMinimal.h"
#include "SBZAnimNotify_BaseNotify.h"
#include "SBZAnimNotify_AkEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_AkEvent : public USBZAnimNotify_BaseNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
public:
    USBZAnimNotify_AkEvent();
};

