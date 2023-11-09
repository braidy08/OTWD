#pragma once
#include "CoreMinimal.h"
#include "SBZAlignmentVisualOrientation.generated.h"

class ASBZCharacter;
class ASBZPlayerCharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentVisualOrientation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* LocalPlayer;
    
    FSBZAlignmentVisualOrientation();
};

