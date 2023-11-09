#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBZOutlineComponent.generated.h"

class UMeshComponent;
class UPrimitiveComponent;
class USBZOutlineSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZOutlineComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* DefaultSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBoundsCenter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* CurrentActiveMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveReplicated, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* ActiveReplicated;
    
public:
    USBZOutlineComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopUsingPositionComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetPositionComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseOutlines(bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void SetHideOutlines(bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void ReplicatedRemoveOutline(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void ReplicatedClearTemporaryOutline(USBZOutlineSchematic* Schematic);
    
    UFUNCTION(BlueprintCallable)
    void ReplicatedAddTemporaryOutline(USBZOutlineSchematic* Schematic, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ReplicatedAddOutline(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOutlineSchematic(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOutline(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMeshComponents(const TArray<UMeshComponent*>& InMeshComponents);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMeshComponent(UMeshComponent* MeshComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAsDirty();
    
    UFUNCTION(BlueprintCallable)
    bool IsOutlinePresent(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    bool IsHidden();
    
    UFUNCTION(BlueprintCallable)
    FVector GetPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMeshComponents(TArray<UMeshComponent*>& OutMeshComponents) const;
    
    UFUNCTION(BlueprintCallable)
    USBZOutlineSchematic* GetDefaultSchematic();
    
    UFUNCTION(BlueprintCallable)
    void ClearTemporaryOutline(USBZOutlineSchematic* Schematic);
    
    UFUNCTION(BlueprintCallable)
    void ClearOutline(USBZOutlineSchematic* OutlineSchematic, bool bClearTemporary, bool bClearReplicatedIfServer);
    
    UFUNCTION(BlueprintCallable)
    void AddTemporaryOutline(USBZOutlineSchematic* Schematic, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddOutlineSchematic(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void AddOutline(USBZOutlineSchematic* OutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void AddMeshComponents(const TArray<UMeshComponent*>& InMeshComponents);
    
    UFUNCTION(BlueprintCallable)
    void AddMeshComponent(UMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddAndSetPositionMeshComponent(UMeshComponent* MeshComponent);
    
};

