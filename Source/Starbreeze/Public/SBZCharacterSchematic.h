#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "SBZUnlockable.h"
#include "SBZWeaponPartSavedData.h"
#include "SBZWeaponSavedData.h"
#include "SBZCharacterSchematic.generated.h"

class APawn;
class USBZGameplayAbilityData;
class USBZPawnTechCollection;
class USBZUnlockableMetadataCollection;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCharacterSchematic : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayProfession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BriefDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> PawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PawnThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PawnThumbnailSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZWeaponFamily> PreferredWeaponFamilies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponSavedData> DefaultWeaponSavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPartSavedData> DefaultWeaponPartSavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadataCollection*> AvailablePawnCosmeticCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPawnTechCollection* TechCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGameplayAbilityData*> PawnGameplayAbilityData;
    
    USBZCharacterSchematic();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGameplayAbilityData* GetPawnGameplayAbilityDataForSlot(int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZUnlockableMetadataCollection* GetPawnCosmeticCollectionForSlot(int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZWeaponSavedData GetDefaultWeaponSavedDataForSlot(int32 Slot) const;
    
};

