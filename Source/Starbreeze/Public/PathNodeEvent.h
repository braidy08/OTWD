#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EPathEventFinishType.h"
#include "PathConnection.h"
#include "PathNodeEvent.generated.h"

class APathNode;
class UNodeEventCategory;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API APathNodeEvent : public AInfo {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEventStartedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventFinishedDelegate, const EPathEventFinishType, FinishType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventStartedDelegate OnEventStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventFinishedDelegate OnEventFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* HostNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathConnection> RequiredConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> ReservedNodes;
    
public:
    APathNodeEvent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupEvent(const UNodeEventCategory* Category, const uint8 Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyEventStarted();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEventFinished(const EPathEventFinishType FinishType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesEventMatch(const UNodeEventCategory* Category, const uint8 Intensity) const;
    
};

