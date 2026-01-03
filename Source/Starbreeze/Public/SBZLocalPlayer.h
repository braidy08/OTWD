#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SBZLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USBZLocalPlayer();

};

