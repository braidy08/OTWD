#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPathNodeActualUsage.h"
#include "PathNodeResponder.generated.h"

class APathNode;
class UBillboardComponent;

UCLASS(Blueprintable)
class STARBREEZE_API APathNodeResponder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* Node;
    
    APathNodeResponder();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNodeReset();
    
    UFUNCTION(BlueprintCallable)
    void OnNodeDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnNodeActivated(const EPathNodeActualUsage ChosenUsage);
    
};

