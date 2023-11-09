#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZDifficulty.h"
#include "ESBZWeaponRarity.h"
#include "SBZMissionReward.generated.h"

class USBZProfileSaveData;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZMissionReward : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    USBZMissionReward();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExplicitRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZWeaponRarity GetRarity(const USBZProfileSaveData* ProfileSaveData, ESBZDifficulty Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPotentialRarityRange(const USBZProfileSaveData* ProfileSaveData, ESBZDifficulty Difficulty, ESBZWeaponRarity& OutLowestPotentialReward, ESBZWeaponRarity& OutHighestPotentialReward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZWeaponRarity GetHighestPotentialRarity() const;
    
};

