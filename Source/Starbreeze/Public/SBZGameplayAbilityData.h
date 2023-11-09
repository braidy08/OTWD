#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbilityStaticCostData.h"
#include "SBZGameplayAbilityTechBranch.h"
#include "SBZUnlockable.h"
#include "SBZGameplayAbilityData.generated.h"

class UGameplayAbility;
class USBZGameplayAbilityData;
class USBZUnlockableMetadata;
class UTexture2D;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZGameplayAbilityData : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAbility> GameplayAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockRequirementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TooltipImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayAbilityStaticCostData> StaticCostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayAbilityTechBranch> TechBranches;
    
    USBZGameplayAbilityData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<USBZGameplayAbilityData> GetUnlockableAsGameplayAbilityData(const USBZUnlockableMetadata* UnlockableMetadata);
    
};

