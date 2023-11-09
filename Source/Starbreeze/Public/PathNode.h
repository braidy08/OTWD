#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConnectionData.h"
#include "EPathNodeActualUsage.h"
#include "EPathNodeState.h"
#include "NodeEventActivationData.h"
#include "PathNode.generated.h"

class APathNode;
class APathNodeEvent;

UCLASS(Blueprintable)
class STARBREEZE_API APathNode : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConnectionData> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PotentialUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNodeEvent*> NodeEventActors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathNodeState State;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathNodeActualUsage ActualUsage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNodeEventActivationData ActiveEventData;
    
    APathNode();
    UFUNCTION(BlueprintCallable)
    bool ResetNode();
    
    UFUNCTION(BlueprintCallable)
    bool ResetConnection(const APathNode* OtherPathNode);
    
    UFUNCTION(BlueprintCallable)
    bool OpenConnection(const APathNode* OtherPathNode, const uint8 ChosenDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConnectionTo(const APathNode* OtherPathNode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FConnectionData GetConnectionTo(const APathNode* OtherPathNode) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<APathNode*> GetConnectedNodes(int32 StateFilter, int32 DirectionFilter, bool bUseExactDirection);
    
    UFUNCTION(BlueprintCallable)
    bool DeactivateNode();
    
    UFUNCTION(BlueprintCallable)
    bool CloseConnection(const APathNode* OtherPathNode, const uint8 ChosenDirection, const bool bFullyClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateNodeWithUsage(const EPathNodeActualUsage Usage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateNodeWithEvent(const FNodeEventActivationData& EventData) const;
    
    UFUNCTION(BlueprintCallable)
    bool ActivateNode(const EPathNodeActualUsage ChosenUsage, const FNodeEventActivationData& ChosenEventData);
    
};

