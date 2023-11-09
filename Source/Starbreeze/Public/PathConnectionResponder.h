#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PathConnectionResponder.generated.h"

class APathNode;
class UBillboardComponent;

UCLASS(Blueprintable)
class STARBREEZE_API APathConnectionResponder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* StartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* EndNode;
    
    APathConnectionResponder();
protected:
    UFUNCTION(BlueprintCallable)
    void OnConnectionReset();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectionOpened(const uint8 ChosenDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectionClosed(const uint8 ChosenDirection, const bool bIsFullyClosed);
    
};

