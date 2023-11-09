#pragma once
#include "CoreMinimal.h"
#include "SBZBuildingAccessStateData.h"
#include "SBZBuildingPrefabAccessSettings.generated.h"

class ASBZBuildingPrefab;

USTRUCT(BlueprintType)
struct FSBZBuildingPrefabAccessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZBuildingPrefab> BuildingPrefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuildingAccessStateData> AccessSettings;
    
    STARBREEZE_API FSBZBuildingPrefabAccessSettings();
};

