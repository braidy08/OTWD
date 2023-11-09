#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZAlignSlotState.h"
#include "GrappleEventOnAIStruggleEndDelegate.h"
#include "GrappleEventOnAddsChangedDelegate.h"
#include "SBZGrappleEventStateProperties.h"
#include "SBZGrappleParticipant.h"
#include "SBZGrappleEvent.generated.h"

class AActor;
class AController;
class ASBZCharacter;
class USBZDamageType;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGrappleEvent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleEventOnAddsChanged OnAddsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleEventOnAIStruggleEnd OnAIStruggleEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleEventStateProperties EventProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZGrappleParticipant> ParticipantPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttackersTryingToJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pending_AttackerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pending_VictimActor;
    
public:
    USBZGrappleEvent();
    UFUNCTION(BlueprintCallable)
    void ParticipantTakeDamage(ASBZCharacter* DamagedActor, float Damage, const USBZDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnAlignmentStateChanged(ESBZAlignSlotState InState, AActor* Actor);
    
};

