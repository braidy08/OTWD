#pragma once
#include "CoreMinimal.h"
#include "SBZSaveData.h"
#include "SBZUISaveData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZUISaveData : public USBZSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TutorialTags;
    
    USBZUISaveData();
};

