#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSBZTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    STARBREEZE_API FSBZTextTableRow();
};

