#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CellVisibilityData.h"
#include "SBZRuntimeVisibilityData.h"
#include "SBZRuntimeVisibilityData_GridBased.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZRuntimeVisibilityData_GridBased : public USBZRuntimeVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GridOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumTestDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCellVisibilityData> CellVisibilityDataCollection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> VisibleCellIndices;
    
public:
    USBZRuntimeVisibilityData_GridBased();
};

