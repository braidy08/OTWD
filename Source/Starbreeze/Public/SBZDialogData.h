#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZDialogDefinition.h"
#include "SBZDialogData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDialogData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZDialogDefinition> Dialogs;
    
    USBZDialogData();
};

