#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmorPartReleaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FArmorPartReleaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    STARBREEZE_API FArmorPartReleaseInfo();
};

