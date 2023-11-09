#pragma once
#include "CoreMinimal.h"
#include "ESBZChatSettings.generated.h"

UENUM(BlueprintType)
enum class ESBZChatSettings : uint8 {
    AlwaysShow,
    ShowOnMessage,
    AlwaysHidden,
};

