#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "SBZWheeledVehicleMovementComponent4W.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent4W {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleEngineData BoostEngineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeMass;
    
public:
    USBZWheeledVehicleMovementComponent4W();
};

