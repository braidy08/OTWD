#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZPlayerItemEventTracker.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerItemEventTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
public:
    USBZPlayerItemEventTracker();
};

