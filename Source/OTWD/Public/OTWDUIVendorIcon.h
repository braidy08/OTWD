#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTWDUIVendorIcon.generated.h"

class UCurveFloat;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OTWD_API AOTWDUIVendorIcon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Plane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TransparencyFadeOutDistance;
    
    AOTWDUIVendorIcon();
};

