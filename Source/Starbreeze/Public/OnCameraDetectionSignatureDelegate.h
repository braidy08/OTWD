#pragma once
#include "CoreMinimal.h"
#include "OnCameraDetectionSignatureDelegate.generated.h"

class AActor;
class USBZCameraPOIComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraDetectionSignature, AActor*, Detector, USBZCameraPOIComponent*, DetectedComponent);

