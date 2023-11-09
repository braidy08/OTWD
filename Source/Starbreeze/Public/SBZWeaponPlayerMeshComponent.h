#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponRarity.h"
#include "SBZModularMeshComponent.h"
#include "SBZWeaponConfiguration.h"
#include "SBZWeaponPlayerMeshComponent.generated.h"

class UMeshComponent;
class USBZAmmoStatsSchematic;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZWeaponPlayerMeshComponent : public USBZModularMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponConfiguration WeaponConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAmmoStatsSchematic* AmmoStatsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* SpeedLoaderMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> AmmoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> EmptyAmmoArray;
    
public:
    USBZWeaponPlayerMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetWeaponConfiguration(const FSBZWeaponConfiguration& NewWeaponConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void SetRarityCondition(ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition);
    
    UFUNCTION(BlueprintCallable)
    ESBZWeaponRarity GetWeaponRarity();
    
    UFUNCTION(BlueprintCallable)
    ESBZWeaponCondition GetWeaponCondition();
    
};

