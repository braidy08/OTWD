#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ESBZPlayerDefeatState.h"
#include "Templates/SubclassOf.h"
#include "OTWDGameIntensityAnalyzer.generated.h"

class AActor;
class AOTWDGameIntensityAnalyzer;
class ASBZPlayerCharacter;
class UObject;
class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class OTWD_API AOTWDGameIntensityAnalyzer : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MusicSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StealthRPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NeutralRPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEnemiesNearBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemiesNearByRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTargetedByAlertedEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefeatedMusicRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> EnterCombatFeedback;
    
public:
    AOTWDGameIntensityAnalyzer();
    UFUNCTION(BlueprintCallable)
    void OnTargetInfoUpdated(ASBZPlayerCharacter* PlayerCharacter, int32 TargetedByAggroEnemies, int32 TargetedByAlertEnemies);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AOTWDGameIntensityAnalyzer* GetGameIntensityAnalyzer(UObject* WorldContextObject);
    
};

