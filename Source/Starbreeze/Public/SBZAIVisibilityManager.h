#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZAIVisibilityLeafNode.h"
#include "SBZAIVisibilityManager.generated.h"

class ASBZAIVisibilityManager;
class ASBZCharacter;
class ASBZPlayerCharacter;
class ISBZAIVisibilityRelevant;
class USBZAIVisibilityRelevant;
class UObject;
class USBZAIVisibilityComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAIVisibilityManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComputedNodePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromObstacleToBeStandCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromObstacleToBeCrouchCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistFromEnemyToBeCrouchCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistFromEnemyToBeStandCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIVisibilityComponent* VisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIVisibilityRelevantActorsEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIVisibilityRelevantActorsAutomatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerCharacter*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, TScriptInterface<ISBZAIVisibilityRelevant>> AIVisibilityRelevants;
    
public:
    ASBZAIVisibilityManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RateTargetLocation(const ASBZCharacter* TargetCharacter, const FVector& StartLocation, const FVector& TargetLocation, const float MaxRelevantDist, const float EnemyExcluderRadius, const float RejectingHeightDiffBetweenNodeAndTarget, uint8& OutVisibilityScore, uint8& OutDistanceScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeNotVisibleLocation(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeNotVisibleActor(const FSBZAIVisibilityLeafNode& LeafNode, const AActor* ActorObserver, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationNotVisibleFromLocation(const FVector& Location, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterNotVisibleFromCharacter(const ASBZCharacter* Character, const ASBZCharacter* ObserverCharacter, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIVisibilityRelevantNotVisibleFromAIVisibility(const TScriptInterface<ISBZAIVisibilityRelevant> AIVisibilityRelevant, const TScriptInterface<ISBZAIVisibilityRelevant> ObserverAIVisibilityRelevant, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisibilityData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAIVisibilityLeafNode GetAiVisibilityNode(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZAIVisibilityManager* GetAIVisibilityManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool DebugLocation(const UObject* WorldContextObject, const FVector& Location, const bool bDrawAzymuts) const;
    
};

