#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPlayerActionHandler -FallbackName=SBZPlayerActionHandler
#include "OTWDPlayerActionHandler.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDPlayerActionHandler : public USBZPlayerActionHandler {
    GENERATED_BODY()
public:
    UOTWDPlayerActionHandler(const FObjectInitializer& ObjectInitializer);

};

