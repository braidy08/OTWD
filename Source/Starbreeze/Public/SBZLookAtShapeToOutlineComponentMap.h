#pragma once
#include "CoreMinimal.h"
#include "SBZLookAtShapeToOutlineComponentMap.generated.h"

class UPrimitiveComponent;
class USBZOutlineComponent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZLookAtShapeToOutlineComponentMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LookAtShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    FSBZLookAtShapeToOutlineComponentMap();
};

