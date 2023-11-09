#pragma once
#include "CoreMinimal.h"
#include "ModularPartsCollection.generated.h"

class USBZFlashlightComponent;
class USBZLaserSightComponent;
class USBZModularWeaponPartComponent;
class USBZSightScopeComponent;
class USBZSilencerComponent;

USTRUCT(BlueprintType)
struct FModularPartsCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZModularWeaponPartComponent*> StatMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSilencerComponent* Silencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZFlashlightComponent* Flashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSightScopeComponent* SightScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLaserSightComponent* LaserSight;
    
    STARBREEZE_API FModularPartsCollection();
};

