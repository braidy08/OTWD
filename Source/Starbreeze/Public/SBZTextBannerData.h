#pragma once
#include "CoreMinimal.h"
#include "SBZTextBannerData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTextBannerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    FSBZTextBannerData();
};

