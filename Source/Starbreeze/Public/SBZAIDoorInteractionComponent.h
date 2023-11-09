#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZDoorInteractionReplicatedDatas.h"
#include "SBZAIDoorInteractionComponent.generated.h"

class ASBZAICharacter;
class ASBZDoor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIDoorInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZDoor* LastDoor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZAICharacter> OwningAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractionData, meta=(AllowPrivateAccess=true))
    FSBZDoorInteractionReplicatedDatas CurrentInteractionDatas;
    
public:
    USBZAIDoorInteractionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZDoor* GetCurrentDoor() const;
    
};

