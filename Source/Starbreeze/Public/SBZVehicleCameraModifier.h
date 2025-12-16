#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "SBZVehicleCameraModifier.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZVehicleCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ParentSceneComponent;
    
public:
    USBZVehicleCameraModifier();

    UFUNCTION(BlueprintCallable)
    void SetVehicle(AActor* TargetVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneComponent(USceneComponent* InSceneComponent);
    
};

