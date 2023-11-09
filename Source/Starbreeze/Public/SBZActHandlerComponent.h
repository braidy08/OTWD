#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZActData.h"
#include "SBZActHandlerComponent.generated.h"

class USBZActAnimationSetSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZActHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZActAnimationSetSchematic* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZActData ActData;
    
public:
    USBZActHandlerComponent();
};

