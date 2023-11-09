#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPickupItem.h"
#include "Templates/SubclassOf.h"
#include "SBZThrownItem.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZThrownItem : public ASBZPickupItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleratedPositionDifference;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OnHoldEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMovementVelocityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleratedPositionDifferenceSquared;
    
public:
    ASBZThrownItem();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ThrowCompleted(FTransform ServerTransform);
    
};

