#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZBubbleStatePlayers.h"
#include "SBZPlayBubble.generated.h"

class ASBZCheckpoint;
class ASBZPlayBubble;
class ASBZTriggerPoint;
class UObject;

UCLASS(Blueprintable)
class ASBZPlayBubble : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayBubbleStateChanged, ASBZPlayBubble*, Bubble);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTriggerPoint*> ConnectedTriggerPoints;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayBubbleStateChanged OnDisallowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayBubbleStateChanged OnAllowed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBubbleStatePlayers PlayersAllowedState;
    
public:
    ASBZPlayBubble();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDisallowTimer(float Time, bool bAddWarningTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCheckpointsAndDisallowPlayBubble(const TArray<ASBZCheckpoint*>& Checkpoints, float Timer, bool bAddDefaultWarningTime);
    
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

