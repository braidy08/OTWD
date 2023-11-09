#pragma once
#include "CoreMinimal.h"
#include "SBZChangeData.generated.h"

class UAkAudioEvent;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSBZChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    STARBREEZE_API FSBZChangeData();
};

