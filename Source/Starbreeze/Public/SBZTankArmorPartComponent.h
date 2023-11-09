#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "ESBZDifficulty.h"
#include "OnTankArmorPartDestroyedDelegate.h"
#include "SBZTankArmorPartComponent.generated.h"

class UAkAudioEvent;
class UPhysicalMaterial;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZTankArmorPartComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTankArmorPartDestroyed OnTankArmorPartDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> DurabilityByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PartRemovedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* OverridePhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDurability;
    
public:
    USBZTankArmorPartComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Replenish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemoved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityMaximum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityCurrent() const;
    
};

