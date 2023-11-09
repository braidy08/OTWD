#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZShoveHandlerPrediction.h"
#include "Templates/SubclassOf.h"
#include "SBZCharacterShoveHandlerComponent.generated.h"

class AActor;
class UCurveFloat;
class USBZDamageType;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterShoveHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<AActor>> ApprovedClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageType> ShoveDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShoveVelocityFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlayers;
    
public:
    USBZCharacterShoveHandlerComponent();
    UFUNCTION(BlueprintCallable)
    void Shove();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Shove(const TArray<FSBZShoveHandlerPrediction>& InShovePredictionArray);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Shove(const TArray<FSBZShoveHandlerPrediction>& InShovePredictionArray);
    
};

