#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CarriableCanBeReleasedChangedDelegate.h"
#include "CarriablePickedUpDelegate.h"
#include "CarriableReleasedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZCarryingComponent.generated.h"

class ASBZCharacter;
class UGameplayEffect;
class USBZBagTypeSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCarryingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachmentLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeOwnerOnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAIOnReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideTargetsWeaponOnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagTypeSchematic* BagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OnHoldEffectClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriablePickedUp OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableReleased OnReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableCanBeReleasedChanged OnCanReleaseChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlacementSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacementSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlacementOffset;
    
public:
    USBZCarryingComponent();
    UFUNCTION(BlueprintCallable)
    bool UpdateCanRelease();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Release();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Pickup(ASBZCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    void Pickup(ASBZCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Release();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Pickup(ASBZCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarrying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetCarryingCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanRelease() const;
    
};

