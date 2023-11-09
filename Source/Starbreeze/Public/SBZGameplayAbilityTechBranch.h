#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZGameplayAbilityTechBranch.generated.h"

class USBZUnlockableMetadata;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSBZGameplayAbilityTechBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BranchColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BranchIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> BranchTechsMetadata;
    
    STARBREEZE_API FSBZGameplayAbilityTechBranch();
};

