#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZCharacterActionHandler.generated.h"

class USBZBaseAction;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterActionHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseAction*> ActionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseAction*> NetworkedActionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USBZBaseAction*> ActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseAction*> ForbiddenActionArray;
    
public:
    USBZCharacterActionHandler();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetActionForbidden(const TSubclassOf<USBZBaseAction> InActionType, bool bInIsForbidden);
    
    UFUNCTION(BlueprintCallable)
    USBZBaseAction* SetActionEnabled(const FName InActionName, bool bInIsEnabled, bool bGracefully);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionEnabled(TSubclassOf<USBZBaseAction> ActionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseAction* GetAction(const TSubclassOf<USBZBaseAction> ActionType) const;
    
};

