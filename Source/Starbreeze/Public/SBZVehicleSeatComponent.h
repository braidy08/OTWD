#pragma once
#include "CoreMinimal.h"
#include "EVehicleSeatOrdering.h"
#include "SBZIVehicleSeatComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZVehicleSeatComponent.generated.h"

class ASBZVehicleSeatPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZVehicleSeatComponent : public USBZIVehicleSeatComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZVehicleSeatPawn> VehicleSeatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleSeatOrdering SortingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitYaw;
    
public:
    USBZVehicleSeatComponent();
};

