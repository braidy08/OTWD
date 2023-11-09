#pragma once
#include "CoreMinimal.h"
#include "SBZUnlockablesFunctionLibrary.h"
#include "OTWDUnlockablesFunctionLibrary.generated.h"

class ASBZPlayerController;
class UOTWDTakedownWeaponCosmetic;
class USBZCharacterSchematic;
class USBZCosmetic;
class USBZUnlockableMetadataCollection;

UCLASS(Blueprintable)
class OTWD_API UOTWDUnlockablesFunctionLibrary : public USBZUnlockablesFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDUnlockablesFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZUnlockableMetadataCollection* GetTakedownWeaponCosmeticMetadataCollection(const USBZCharacterSchematic* PlayerPawnData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USBZCosmetic*> GetTakedownWeaponCosmeticArray();
    
    UFUNCTION(BlueprintCallable)
    static UOTWDTakedownWeaponCosmetic* GetSelectedTakedownWeapon(ASBZPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZUnlockableMetadataCollection* GetPrimaryAccessoryCosmeticMetadataCollection(const USBZCharacterSchematic* PlayerPawnData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZUnlockableMetadataCollection* GetFlareGunCosmeticMetadataCollection(const USBZCharacterSchematic* PlayerPawnData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZUnlockableMetadataCollection* GetCharacterSkinCosmeticMetadataCollection(const USBZCharacterSchematic* PlayerPawnData);
    
};

