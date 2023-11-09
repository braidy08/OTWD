#pragma once
#include "CoreMinimal.h"
#include "SBZLevelPawnReplaceRule.generated.h"

class USBZCharacterSchematic;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZLevelPawnReplaceRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* DisallowedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* ReplacementPawn;
    
    FSBZLevelPawnReplaceRule();
};

