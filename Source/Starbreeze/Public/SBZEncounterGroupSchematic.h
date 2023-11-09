#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SBZSchematic.h"
#include "SBZWeightedCharacter.h"
#include "SBZEncounterGroupSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZEncounterGroupSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval SpawnAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeightedCharacter> Characters;
    
    USBZEncounterGroupSchematic();
};

