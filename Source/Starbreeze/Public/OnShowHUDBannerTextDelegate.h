#pragma once
#include "CoreMinimal.h"
#include "OnShowHUDBannerTextDelegate.generated.h"

class UAkAudioEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnShowHUDBannerText, FText, LocalisedText, float, Duration, bool, bShowImmediate, UAkAudioEvent*, SoundEvent);

