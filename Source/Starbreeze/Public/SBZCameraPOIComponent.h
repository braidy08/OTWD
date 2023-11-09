#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "OnCameraDetectionSignatureDelegate.h"
#include "SBZCameraPOIComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCameraPOIComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraDetectionSignature OnEnterDetection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraDetectionSignature OnExitDetection;
    
    USBZCameraPOIComponent();
};

