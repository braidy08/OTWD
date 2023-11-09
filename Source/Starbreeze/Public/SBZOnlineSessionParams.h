#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineSessionParams.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct FSBZOnlineSessionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FreeSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* Level;
    
    STARBREEZE_API FSBZOnlineSessionParams();
};

