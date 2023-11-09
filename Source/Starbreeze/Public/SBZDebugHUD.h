#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SBZDebugHUD.generated.h"

class UFont;
class USBZDebugPanel;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZDebugHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* SmallFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* MediumFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* LargeFont;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZDebugPanel*> DebugPanels;
    
public:
    ASBZDebugHUD();
};

