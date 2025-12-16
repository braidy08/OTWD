#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZBubbleStatePlayers.h"
#include "OnPlayBubbleStateChangedDelegate.h"
#include "SBZPlayBubble.generated.h"

class ASBZCheckpoint;
class ASBZPlayBubble;
class ASBZTriggerPoint;
class UObject;

UCLASS(Blueprintable)
class ASBZPlayBubble : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTriggerPoint*> ConnectedTriggerPoints;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayBubbleStateChanged OnDisallowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayBubbleStateChanged OnAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayBubble*> NeighbourBubbles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBubbleStatePlayers PlayersAllowedState;
    
public:
    ASBZPlayBubble(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDisallowTimer(float Time, bool bAddWarningTime, bool bResetActiveTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCheckpointsAndDisallowPlayBubble(const TArray<ASBZCheckpoint*>& Checkpoints, float Timer, bool bAddDefaultWarningTime, bool bResetActiveTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRemoved(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void OnNewAlivePlayer(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void OnExited(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEntered(AActor* OverlappedActor, AActor* OtherActor);
    
};

