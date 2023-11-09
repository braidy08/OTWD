#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZAIStanceNameHelper.h"
#include "SBZAIStancesFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIStancesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAIStancesFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_AIStanceNameName(const FSBZAIStanceNameHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AIStanceNameAIStanceName(const FSBZAIStanceNameHelper& A, const FSBZAIStanceNameHelper& B);
    
    UFUNCTION(BlueprintCallable)
    static bool NotEqual_AIStanceIdName(const FSBZAIStanceIdHelper& A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AIStanceIdAIStanceId(const FSBZAIStanceIdHelper& A, const FSBZAIStanceIdHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_AIStanceName(const FSBZAIStanceNameHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_AIStanceId(const FSBZAIStanceIdHelper& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetNumberOfAIStances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AIStanceNameAIStanceName(const FSBZAIStanceNameHelper& A, const FSBZAIStanceNameHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AIStanceIdAIStanceId(const FSBZAIStanceIdHelper& A, const FSBZAIStanceIdHelper& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AIStanceNameToStanceId(const FSBZAIStanceNameHelper& Stance, FSBZAIStanceIdHelper& StanceIdHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AIStanceNameToDisplayName(const FSBZAIStanceNameHelper Stance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 AIStanceIdToInteger(const FSBZAIStanceIdHelper Stance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AIStanceIdToDisplayName(const FSBZAIStanceIdHelper Stance);
    
};

