#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZAITankComponent.generated.h"

class UAkAudioEvent;
class UDamageType;
class USBZTankArmorPartComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAITankComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UDamageType>> IgnoreArmorDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, USBZTankArmorPartComponent*> ArmorParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ApprovedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitArmorAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitWeakSpotAudioEvent;
    
public:
    USBZAITankComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnArmorPartDestroyed(USBZTankArmorPartComponent* DestroyedArmorPart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddArmorPart(USBZTankArmorPartComponent* InTankArmorPart);
    
};

