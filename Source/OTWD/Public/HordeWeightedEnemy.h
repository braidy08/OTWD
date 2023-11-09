#pragma once
#include "CoreMinimal.h"
#include "HordeWeightedEnemy.generated.h"

class USBZAICharacterSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FHordeWeightedEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* EnemySchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FHordeWeightedEnemy();
};

