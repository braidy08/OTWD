#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZWeaponDataCollection.generated.h"

class ASBZWeapon;
class USBZWeaponData;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZWeaponDataCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponData*> Collection;
    
    USBZWeaponDataCollection();
    UFUNCTION(BlueprintCallable)
    void GenerateUIStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZWeaponData* FindWeaponDataForWeaponClass(TSoftClassPtr<ASBZWeapon> WeaponClass) const;
    
    UFUNCTION(BlueprintCallable)
    void CollectWeaponData() const;
    
};

