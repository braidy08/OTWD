#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "OnSearchAreaReachedDelegate.h"
#include "OnSearchTargetReachedDelegate.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAISearch.generated.h"

class ASBZAICharacter;
class ASBZAISearch;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAISearch : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchAreaReached OnSearchAreaReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchTargetReached OnSearchTargetReached;
    
    ASBZAISearch();
    UFUNCTION(BlueprintCallable)
    void SearchGroup(TArray<ASBZAICharacter*> AICharacters, FSBZAIStanceIdHelper Stance, FSBZAlertnessLevelIdHelper AlertnessLevel, FVector TargetPosition);
    
    UFUNCTION(BlueprintCallable)
    void Search(ASBZAICharacter* AICharacter, FSBZAIStanceIdHelper Stance, FSBZAlertnessLevelIdHelper AlertnessLevel, float SearchTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZAISearch* GetAISearchManager(UObject* WorldContextObject);
    
};

