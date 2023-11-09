#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "SBZGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USBZGameViewportClient();
};

