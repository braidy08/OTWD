#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESBZLadderNavLinkDirection.h"
#include "ESBZLadderOrientation.h"
#include "SBZLadderNode.h"
#include "SBZLadderParts.h"
#include "Templates/SubclassOf.h"
#include "SBZLadder.generated.h"

class ASBZCharacter;
class UBoxComponent;
class UChildActorComponent;
class UMaterialInterface;
class UNavArea;
class UPrimitiveComponent;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLadder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderNode BottomNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderNode TopNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderNode WaitingBottomNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderNode WaitingTopNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderNode NavLinkBottomNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderNode NavLinkTopNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerAreaThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerAreaHeightExceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreadStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstBottomTreadLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLadderOrientation LadderOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLadderParts LadderParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LadderPartCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TopMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MiddleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BottomMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> TopPartGhostMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MiddlePartGhostMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BottomPartGhostMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> TopPartOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MiddlePartOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BottomPartOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGhostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerGhostMode, meta=(AllowPrivateAccess=true))
    bool bServerGhostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverBeInGhostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LadderActive, meta=(AllowPrivateAccess=true))
    bool bLadderActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* NavLinkChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLadderNavLinkDirection NavLinkDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavLinkSnapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHackUpdateLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZCharacter>> CharactersOnladder;
    
public:
    ASBZLadder();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowGhost(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLadderActive(bool bInLadderActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGhostModeActive(bool bActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_SetLadderActive(bool bActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_SetGhostModeActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void RemoveClimbingCharacter(ASBZCharacter* InCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerGhostMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LadderActive();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetLadderActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetGhostModeActive(bool bActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGhostMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTreadStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLadderRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLadderRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLadderForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInterpToUpperTread(FVector CurrentLocation, uint8 NumberOftread) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClosestTreadLocation(const FVector& CurrentLocation, float CharacterHeight, FVector& OutTreadLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestPoint(const FVector CurrentLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void AddClimbingCharacter(ASBZCharacter* InCharacter);
    
};

