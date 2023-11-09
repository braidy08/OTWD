#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBlueprintBase.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZBlueprintBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDormant: 1;
    
    ASBZBlueprintBase();
};

