#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_VehicleDrive.h"
#include "SBZBTTask_FollowVehicle.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_FollowVehicle : public USBZBTTask_VehicleDrive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedTolerence;
    
public:
    USBZBTTask_FollowVehicle();
};

