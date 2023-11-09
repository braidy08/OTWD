#pragma once
#include "CoreMinimal.h"
#include "SBZMissionSaveData.h"
#include "OTWDMissionSaveData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOTWDMissionSaveData : public USBZMissionSaveData {
    GENERATED_BODY()
public:
    UOTWDMissionSaveData();
};

