#pragma once
#include "CoreMinimal.h"
#include "Perception/PawnSensingComponent.h"
#include "SBZPawnSensingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPawnSensingComponent : public UPawnSensingComponent {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FLostPawnDelegate OnLostPawn;
    
    USBZPawnSensingComponent();
};

