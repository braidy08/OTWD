#pragma once
#include "CoreMinimal.h"
#include "SBZBaseActAnimationSet.h"
#include "SBZActAnimationSetSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZActAnimationSetSchematic : public USBZBaseActAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    USBZActAnimationSetSchematic();
};

