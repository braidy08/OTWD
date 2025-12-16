#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDifficulty.h"
#include "ESBZSpecialArmorType.h"
#include "SBZBaseGearActor.h"
#include "SBZArmorPart.generated.h"

class UAkAudioEvent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZArmorPart : public ASBZBaseGearActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> DifficultyBasedDurability;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurabilityByDifficulty[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwitchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwitchValueOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwitchValueOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpecialArmorType SpecialArmorType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachedArrmorPartLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyLeftoverDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitArmorAudioEvent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PopAudioEvent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PopAudioEvent3D;
    
public:
    ASBZArmorPart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReplenishArmor();
    
    UFUNCTION(BlueprintCallable)
    void PopGear(const FVector& HitDirection);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PopArmor(FVector HitDirection);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityMaximum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityCurrent() const;
    
};

