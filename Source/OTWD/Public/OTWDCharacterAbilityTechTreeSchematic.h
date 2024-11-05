#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OTWDCharacterAbilityTechTreeSchematic.generated.h"

class APawn;
class UOTWDAbilityTechListSchematic;
class USBZGameplayAbilityData;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=OTWD)
class OTWD_API UOTWDCharacterAbilityTechTreeSchematic : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APawn>, TSoftObjectPtr<UOTWDAbilityTechListSchematic>> CharacterTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APawn>, UOTWDAbilityTechListSchematic*> CachedCharacterTrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGameplayAbilityData> DefaultSecondaryAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityData* CachedDefaultSecondaryAbilityData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGameplayAbilityData> DefaultToolAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityData* CachedDefaultToolAbilityData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGameplayAbilityData> DefaultDefenceAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityData* CachedDefaultDefenceAbilityData;
    
    UOTWDCharacterAbilityTechTreeSchematic();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZGameplayAbilityData* GetDefaultToolAbilityData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZGameplayAbilityData* GetDefaultSecondaryAbilityData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZGameplayAbilityData* GetDefaultDefenceAbilityData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<TSoftClassPtr<APawn>, UOTWDAbilityTechListSchematic*> GetCharacterTrees();
    
};

