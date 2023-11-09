#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZPOIHandlerComponent.generated.h"

class UDEPRECATED_SBZPOIComponent;
class USBZActAnimationSetSchematic;

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UDEPRECATED_SBZPOIHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    //UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess = true))
    //UDEPRECATED_SBZPOIComponent* UsingPOIComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZActAnimationSetSchematic* AnimationSet;
    
public:
    UDEPRECATED_SBZPOIHandlerComponent();
};

