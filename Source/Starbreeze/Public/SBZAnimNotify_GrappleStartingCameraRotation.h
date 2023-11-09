#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZAnimNotify_GrappleStartingCameraRotation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_GrappleStartingCameraRotation : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraSocketName;
    
public:
    USBZAnimNotify_GrappleStartingCameraRotation();
};

