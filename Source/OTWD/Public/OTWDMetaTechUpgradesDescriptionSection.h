#pragma once
#include "CoreMinimal.h"
#include "OTWDMetaTechUpgradesDescriptionSection.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetaTechUpgradesDescriptionSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SectionHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SectionEntries;
    
    OTWD_API FOTWDMetaTechUpgradesDescriptionSection();
};

