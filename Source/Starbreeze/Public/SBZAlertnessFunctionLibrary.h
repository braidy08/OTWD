#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAlertnessInfluenceIdHelper.h"
#include "SBZAlertnessInfluenceNameHelper.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAlertnessLevelNameHelper.h"
#include "SBZAlertnessFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAlertnessFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAlertnessFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_AlertLevelNameName(const FSBZAlertnessLevelNameHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AlertLevelNameAlertLevelName(const FSBZAlertnessLevelNameHelper& A, const FSBZAlertnessLevelNameHelper& B);
    
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_AlertLevelIdName(const FSBZAlertnessLevelIdHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AlertLevelIdAlertLevelId(const FSBZAlertnessLevelIdHelper& A, const FSBZAlertnessLevelIdHelper& B);
    
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_AlertInfluenceNameName(const FSBZAlertnessInfluenceNameHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AlertInfluenceNameAlertInfluenceName(const FSBZAlertnessInfluenceNameHelper& A, const FSBZAlertnessInfluenceNameHelper& B);
    
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_AlertInfluenceIdName(const FSBZAlertnessInfluenceIdHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AlertInfluenceIdAlertInfluenceId(const FSBZAlertnessInfluenceIdHelper& A, const FSBZAlertnessInfluenceIdHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_AlertLevelName(const FSBZAlertnessLevelNameHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_AlertLevelId(const FSBZAlertnessLevelIdHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_AlertInfluenceName(const FSBZAlertnessInfluenceNameHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_AlertInfluenceId(const FSBZAlertnessInfluenceIdHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetNumberOfAlertnessLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetNumberOfAlertnessInfluences();
    
    UFUNCTION(BlueprintCallable)
    static bool ForceAlertLevel(AActor* TargetAgent, FSBZAlertnessLevelIdHelper AlertLevel, FSBZAlertnessInfluenceIdHelper Influence, AActor* InfluenceTarget, float Alertness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AlertLevelNameAlertLevelName(const FSBZAlertnessLevelNameHelper& A, const FSBZAlertnessLevelNameHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AlertLevelIdAlertLevelId(const FSBZAlertnessLevelIdHelper& A, const FSBZAlertnessLevelIdHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AlertInfluenceNameAlertInfluenceName(const FSBZAlertnessInfluenceNameHelper& A, const FSBZAlertnessInfluenceNameHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AlertInfluenceIdAlertInfluenceId(const FSBZAlertnessInfluenceIdHelper& A, const FSBZAlertnessInfluenceIdHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AlertnessLevelNameToDisplayName(const FSBZAlertnessLevelNameHelper Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 AlertnessLevelIdToInteger(const FSBZAlertnessLevelIdHelper Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AlertnessLevelIdToDisplayName(const FSBZAlertnessLevelIdHelper Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AlertnessInfluenceNameToDisplayName(const FSBZAlertnessInfluenceNameHelper Influence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 AlertnessInfluenceIdToInteger(const FSBZAlertnessInfluenceIdHelper Influence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AlertnessInfluenceIdToDisplayName(const FSBZAlertnessInfluenceIdHelper Influence);
    
};

