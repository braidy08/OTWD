#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZWeaponPartDataCollection.generated.h"

class USBZWeaponPartSchematic;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZWeaponPartDataCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSchematic*> Collection;
    
    USBZWeaponPartDataCollection();
    UFUNCTION(BlueprintCallable)
    void GenerateUIStats() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateCompatibilities() const;
    
    UFUNCTION(BlueprintCallable)
    void CollectWeaponPartData() const;
    
};

