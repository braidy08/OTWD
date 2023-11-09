#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZHeadbobCameraModifier.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZHeadbobCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ControllingCharacterMesh;
    
public:
    USBZHeadbobCameraModifier();
};

