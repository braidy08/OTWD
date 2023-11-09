#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SBZFirstPersonCameraAttachment.generated.h"

class ASBZPlayerCharacter;
class ASBZWeapon;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZFirstPersonCameraAttachment : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeapon* CurrentWeapon;
    
public:
    USBZFirstPersonCameraAttachment();
    UFUNCTION(BlueprintCallable)
    void SetSwayEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPointing(const FRotator& Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateWeaponPivotOffset() const;
    
};

