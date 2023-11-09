#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZFactionIdHelper.h"
#include "SBZFactionNameHelper.h"
#include "SBZFactionsFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class STARBREEZE_API USBZFactionsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZFactionsFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_FactionNameName(const FSBZFactionNameHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FactionNameFactionName(const FSBZFactionNameHelper& A, const FSBZFactionNameHelper& B);
    
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_FactionIdName(const FSBZFactionIdHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FactionIdFactionId(const FSBZFactionIdHelper& A, const FSBZFactionIdHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_FactionName(const FSBZFactionNameHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_FactionId(const FSBZFactionIdHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetNumberOfFactions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetFactionAttitude(const FSBZFactionIdHelper& From, const FSBZFactionIdHelper& Towards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetActorAttitude(const AActor* From, const AActor* Towards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FactionNameToDisplayName(const FSBZFactionNameHelper Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 FactionIdToInteger(const FSBZFactionIdHelper Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FactionIdToDisplayName(const FSBZFactionIdHelper Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_FactionNameFactionName(const FSBZFactionNameHelper& A, const FSBZFactionNameHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_FactionIdFactionId(const FSBZFactionIdHelper& A, const FSBZFactionIdHelper& B);
    
};

