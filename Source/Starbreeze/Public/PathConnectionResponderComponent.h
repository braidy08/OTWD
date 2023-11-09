#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PathConnectionResponderComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UPathConnectionResponderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondWhenOpened;
    
    UPathConnectionResponderComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConnectionReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConnectionOpened(const uint8 ChosenDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConnectionClosed(const uint8 ChosenDirection, const bool bIsFullyClosed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDirectionAllowed(const uint8 Direction) const;
    
};

