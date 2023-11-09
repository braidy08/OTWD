#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZVehicleServiceComponent.h"
#include "SBZAIVehicleServiceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIVehicleServiceComponent : public USBZVehicleServiceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PathTag;
    
public:
    USBZAIVehicleServiceComponent();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnPossessVehicle(FVector RelativeLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnExitVehicle(FVector ExitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnDetachFromVehicleSeat(FVector ExitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnAttachToVehicleSeat();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPathNavIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPathIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetNavPath() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugDrawPath(const TArray<FVector>& PathToDraw);
    
};

