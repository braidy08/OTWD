#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraComponent.h"
#include "CameraViewportStateSignatureDelegate.h"
#include "SBZCameraComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraViewportStateSignature OnTargetEnterViewport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraViewportStateSignature OnTargetExitViewport;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCollision;
    
public:
    USBZCameraComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldPointInsideViewport(const FVector& WorldPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInsideViewport(AActor* TargetActor) const;
    
};

