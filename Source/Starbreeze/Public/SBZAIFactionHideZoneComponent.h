#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZAIFactionHideZoneComponent.generated.h"

class ASBZAIFactionHideZone;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIFactionHideZoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIFactionHideZone*> ActiveZones;
    
public:
    USBZAIFactionHideZoneComponent();
};

