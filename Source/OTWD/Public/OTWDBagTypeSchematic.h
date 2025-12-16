#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZBagTypeSchematic -FallbackName=SBZBagTypeSchematic
#include "OTWDBagTypeSchematic.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDBagTypeSchematic : public USBZBagTypeSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetaResources;
    
    UOTWDBagTypeSchematic();

};

