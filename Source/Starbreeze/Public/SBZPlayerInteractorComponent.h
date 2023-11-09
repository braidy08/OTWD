#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZBaseInteractorComponent.h"
#include "SBZInteractionData.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerInteractorComponent.generated.h"

class APawn;
class APlayerController;
class ASBZCharacter;
class ASBZInteractorVolume;
class ASBZPlayerCharacter;
class UPrimitiveComponent;
class USBZInteractableComponent;
class USBZInteractionWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerInteractorComponent : public USBZBaseInteractorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZInteractionWidget> InteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionCameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionCameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionCameraYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionCameraYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* SBZPlayerCharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInteractionData InteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractionWidget* InteractionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* BlockedInteractionTargetable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* TargetedInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TargetedLookAtShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* VolumeInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractionData, meta=(AllowPrivateAccess=true))
    FSBZInteractionData InteractionDataServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* PawnOwner;
    
public:
    USBZPlayerInteractorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateInteractionData(const FSBZInteractionData& InInteractionData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void StartInteractionServer(USBZInteractableComponent* Component);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVolumeInteraction(ASBZInteractorVolume* NewInteractorVolume);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeleport(ASBZCharacter* Char);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInteractableComponent* GetTargetedInteractable() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void EndInteractionServer(bool bIsInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearVolumeInteraction(ASBZInteractorVolume* NewInteractorVolume);
    
};

