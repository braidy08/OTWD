#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OperationSignatureDelegate.h"
#include "SBZModularAttachmentComponents.h"
#include "SBZModularPart.h"
#include "SBZModularMeshComponent.generated.h"

class UMeshComponent;
class UPrimitiveComponent;
class USBZMaterialReplacements;
class USBZWeaponPartSlot;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZModularMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOperationSignature ComponentSpawningStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOperationSignature ComponentSpawningFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USBZMaterialReplacements* MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSlot*> UnskinnedPartSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* BaseRigComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* BaseRigPrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseRigSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularPart> ModularParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZModularAttachmentComponents> AttachableSockets;
    
public:
    USBZModularMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateInstancedComponentsFromBaseRig();
    
    UFUNCTION(BlueprintCallable)
    void SpawnModularMesh(bool bSynchronously);
    
    UFUNCTION(BlueprintCallable)
    void SetModularParts(const TArray<FSBZModularPart>& Parts);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseRigComponent(USceneComponent* NewBaseRigComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawningComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetTightBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetSlotTightBounds(USBZWeaponPartSlot* PartSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMeshComponent*> GetSlotMeshComponents(USBZWeaponPartSlot* PartSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetSlotBounds(USBZWeaponPartSlot* PartSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMeshComponent*> GetMeshComponents() const;
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetComponentBySocket(const FName& InSocketName, bool bUseBaseRigAsDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    
    UFUNCTION(BlueprintCallable)
    void AddModularParts(const TArray<FSBZModularPart>& Parts);
    
};

