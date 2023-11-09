#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZTimerUpdateInfo.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct FSBZTimerUpdateInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    STARBREEZE_API FSBZTimerUpdateInfo();
};

