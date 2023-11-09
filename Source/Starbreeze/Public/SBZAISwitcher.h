#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAISwitcher.generated.h"

class USBZOutlineSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAISwitcher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwitchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDebugOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* DebugOutlineSchematic;
    
    ASBZAISwitcher();
};

