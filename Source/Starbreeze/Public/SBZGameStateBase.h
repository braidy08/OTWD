#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "SBZGameStateBase.generated.h"

class ASBZStatsDummyWeapon;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ElapsedTime, meta=(AllowPrivateAccess=true))
    int32 ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZStatsDummyWeapon* StatsDummyWeapon;
    
    ASBZGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ElapsedTime();
    
};

