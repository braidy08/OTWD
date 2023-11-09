#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogType.h"
#include "SBZDialogLineDefinition.h"
#include "SBZDialogDefinition.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDialogDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDialogType DialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDialogLineDefinition> DialogLines;
    
    FSBZDialogDefinition();
};

