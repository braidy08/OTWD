#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECreditsContext.h"
#include "SBZCreditsDataTable.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZCreditsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditsContext Context;
    
    FSBZCreditsDataTable();
};

