#pragma once
#include "CoreMinimal.h"
#include "SBZModularWeaponPartComponent.h"
#include "SBZSightScopeComponent.generated.h"

class ASBZPlayerCharacter;
class USBZSightScopeStatsSchematic;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSightScopeComponent : public USBZModularWeaponPartComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocallyControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSightScopeStatsSchematic* SightScopeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TargetingMeshComponent;
    
public:
    USBZSightScopeComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeaveTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterTargeting();
    
};

