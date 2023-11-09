#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAssaultManager.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAssaultManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnagageRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnagageCooldown;
    
    ASBZAssaultManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* Actor);
    
};

