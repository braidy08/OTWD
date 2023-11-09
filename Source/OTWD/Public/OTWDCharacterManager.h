#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ESBZDifficulty.h"
#include "OTWDCharacterManager.generated.h"

class APawn;
class UOTWDCharacterLevelsDataAsset;
class UOTWDGameInstance;
class USBZCharactersSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDCharacterManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharactersSchematic* Schematic;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDCharacterLevelsDataAsset* LevelData;
    
    UOTWDCharacterManager();
    UFUNCTION(BlueprintCallable)
    void RewardExperience(FGuid Character, int32 Experience, bool bIsBleedXp, bool bAwardBleedXp);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillsPoints(const TSoftClassPtr<APawn>& PawnClass);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcMissionCompletedExperienceRewardAtSpecificLevel(int32 LevelIdx, ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyDifficultyExperienceModifier(int32 Experience, ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void AddSkillPoints(const TSoftClassPtr<APawn>& PawnClass, int32 Amount);
    
};

