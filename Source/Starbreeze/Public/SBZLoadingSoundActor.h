#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZLoadingSoundActor.generated.h"

class UMediaSoundComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLoadingSoundActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    ASBZLoadingSoundActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameReady();
    
};

