#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZWeaponManufacturer.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponManufacturer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LongName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Logo;
    
    USBZWeaponManufacturer();
};

