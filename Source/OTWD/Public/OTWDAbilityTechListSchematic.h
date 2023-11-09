#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDAbilityTechListSchematic.generated.h"

class USBZUnlockableMetadata;

UCLASS(Blueprintable)
class OTWD_API UOTWDAbilityTechListSchematic : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> TechsMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> PrePurchasedTechsMetadata;
    
    UOTWDAbilityTechListSchematic();
    UFUNCTION(BlueprintCallable)
    void OrganizeTechs();
    
};

