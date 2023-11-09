#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZSaveData.h"
#include "SBZMissionSaveData.generated.h"

class USBZLevelSchematic;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMissionSaveData : public USBZSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* CurrentMissionSchematic;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstRunCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty HighestCompletedDifficulty;
    
    USBZMissionSaveData();
    UFUNCTION(BlueprintCallable)
    void MarkAsCompletedWithDifficulty(ESBZDifficulty CompletedDifficulty);
    
};

