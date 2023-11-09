#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSaveLoadData.h"
#include "SBZSaveLoadController.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZSaveLoadController : public USBZSaveLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    USBZSaveLoadController();
};

