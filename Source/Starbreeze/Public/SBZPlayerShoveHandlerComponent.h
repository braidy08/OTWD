#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZCharacterShoveHandlerComponent.h"
#include "SBZPlayerShoveHandlerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerShoveHandlerComponent : public USBZCharacterShoveHandlerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxHalfSize;
    
public:
    USBZPlayerShoveHandlerComponent();
};

