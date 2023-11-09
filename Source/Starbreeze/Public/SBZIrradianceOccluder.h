#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZIrradianceOccluder.generated.h"

class USBZIrradianceOccluderComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZIrradianceOccluder : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZIrradianceOccluderComponent* IrradianceOccluderComponent;
    
public:
    ASBZIrradianceOccluder();
};

