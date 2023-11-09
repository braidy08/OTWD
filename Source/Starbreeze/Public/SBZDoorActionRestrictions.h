#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "Templates/SubclassOf.h"
#include "SBZDoorActionRestrictions.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorActionRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorActionType Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZCharacter>> CharactersClasses;
    
    FSBZDoorActionRestrictions();
};

