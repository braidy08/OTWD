#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityWorldReticle.h"
#include "GameplayAbilityWorldReticle_SBZDeployableVisualization.generated.h"

class UCapsuleComponent;
class UMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API AGameplayAbilityWorldReticle_SBZDeployableVisualization : public AGameplayAbilityWorldReticle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> VisualizationComponents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
public:
    AGameplayAbilityWorldReticle_SBZDeployableVisualization();
};

