#pragma once
#include "CoreMinimal.h"
#include "SBZGameModeBase.h"
#include "SBZLoadingTransitionGameMode.generated.h"

class ASBZLoadingSoundActor;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZLoadingTransitionGameMode : public ASBZGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZLoadingSoundActor* LoadingSoundObject;
    
    ASBZLoadingTransitionGameMode();
};

