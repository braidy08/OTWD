#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZWeaponPartSavedData -FallbackName=SBZWeaponPartSavedData
#include "OTWDWeaponPartSavedData.generated.h"

USTRUCT(BlueprintType)
struct FOTWDWeaponPartSavedData : public FSBZWeaponPartSavedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkedAsFavorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkedAsNew;
    
    OTWD_API FOTWDWeaponPartSavedData();
};

