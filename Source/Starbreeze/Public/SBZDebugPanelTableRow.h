#pragma once
#include "CoreMinimal.h"
#include "SBZDebugPanelTableRow.generated.h"

class UFont;

USTRUCT(BlueprintType)
struct FSBZDebugPanelTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    STARBREEZE_API FSBZDebugPanelTableRow();
};

