#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerCinematicInteractionAction.generated.h"

class ASkeletalMeshActor;
class UAnimMontage;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerCinematicInteractionAction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterMontageOnSuccess1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterMontageOnSuccess3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponMontageOnSuccess1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponMontageOnSuccess3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkeletalMeshActor> WeaponMeshActorClassOnSuccess1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkeletalMeshActor> WeaponMeshActorClassOnSuccess3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketOnSuccess1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketOnSuccess3P;
    
public:
    ASBZPlayerCinematicInteractionAction();
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* InInteractable, const TArray<USBZBaseInteractorComponent*>& InInteractors);
    
};

