#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTWDCrowdSwitcher.generated.h"

class AZombieCharacter;

UCLASS(Blueprintable)
class OTWD_API AOTWDCrowdSwitcher : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AZombieCharacter*> ActiveZombies;
    
public:
    AOTWDCrowdSwitcher();
};

