#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZMissionSaveData -FallbackName=SBZMissionSaveData
#include "OTWDMissionSaveData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOTWDMissionSaveData : public USBZMissionSaveData {
    GENERATED_BODY()
public:
    UOTWDMissionSaveData();

};

