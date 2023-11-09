#pragma once
#include "CoreMinimal.h"
#include "SBZDebugPanelTableRow.h"
#include "SBZDebugPanelTable.generated.h"

USTRUCT(BlueprintType)
struct FSBZDebugPanelTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZDebugPanelTableRow> Rows;
    
    STARBREEZE_API FSBZDebugPanelTable();
};

