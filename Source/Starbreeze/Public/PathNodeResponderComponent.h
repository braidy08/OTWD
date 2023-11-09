#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPathNodeActualUsage.h"
#include "PathNodeResponderComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UPathNodeResponderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedUsages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondWhenActivated;
    
    UPathNodeResponderComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNodeReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNodeDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNodeActivated(const EPathNodeActualUsage ChosenUsage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsageAllowed(const EPathNodeActualUsage Usage) const;
    
};

