#pragma once
#include "CoreMinimal.h"
#include "ETwitchVoteOptions.generated.h"

UENUM(BlueprintType)
enum class ETwitchVoteOptions : uint8 {
    TVO_Horde30,
    TVO_Horde60,
    TVO_HordeLevel,
    TVO_Bloaters,
    TVO_Jamming,
    TVO_ArmoredWalkers,
    TVO_HumanTanks,
    TVO_FlickFlashlights,
    TVO_MAX UMETA(Hidden),
};

