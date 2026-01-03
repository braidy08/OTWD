#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Starbreeze/Public/SBZCharacterMovementComponent.h"
#include "OTWDZombieMovementComponent.generated.h"

class ACharacter;
class AZombieCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDZombieMovementComponent : public USBZCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZombieCharacter* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ECC_PlayerBlocker;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ACharacter>> Neighbors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeighbourCountToBeStacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromNeighbourToBeStacked;
    
public:
    UOTWDZombieMovementComponent(const FObjectInitializer& ObjectInitializer);

};

