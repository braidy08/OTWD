#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMarkerConstruct.generated.h"

class AActor;
class USBZCompassMarkerWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMarkerConstruct : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCompassMarkerWidget* CompassMarker;
    
    USBZMarkerConstruct();
};

