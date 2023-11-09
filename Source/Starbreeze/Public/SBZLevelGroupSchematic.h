#pragma once
#include "CoreMinimal.h"
#include "EMapAreaStatus.h"
#include "SBZUnlockable.h"
#include "SBZLevelGroupSchematic.generated.h"

class USBZLevelSchematic;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZLevelGroupSchematic : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LongDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapAreaStatus AreaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelSchematic*> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MaskImage;
    
    USBZLevelGroupSchematic();
};

