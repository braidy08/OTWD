#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMissionTypes.h"
#include "ESBZDifficulty.h"
#include "ESBZLightScenario.h"
#include "ESBZMissionDifficultyAvailable.h"
#include "SBZLevelPawnReplaceRule.h"
#include "SBZUnlockable.h"
#include "SBZLevelSchematic.generated.h"

class USBZMissionCompletionRewards;
class USBZObjectiveSchematic;
class USBZQuest;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZLevelSchematic : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMissionCompletionRewards* CompletionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionTypes MissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DisplayObjectivesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLevelPawnReplaceRule> DisallowedPlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZObjectiveSchematic*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZQuest* LevelQuestRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StreamingLevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZLightScenario> RandomLightScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLightScenario LightScenario;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecommendPowerLevelPerDifficulty[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMissionDifficultyAvailable AvailableDifficulties[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFirstRunFixedDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty FirstRunFixedDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelModifierIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelModifierTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSoloMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VideoPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ActiveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ExtraStateIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MissionID;
    
    USBZLevelSchematic();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeeklyMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoloMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpedition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDifficultyAvailableForLevel(ESBZDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuestRequirement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRecommendedPowerLevelForDifficulty(ESBZDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void GenerateSaveDataID();
    
};

