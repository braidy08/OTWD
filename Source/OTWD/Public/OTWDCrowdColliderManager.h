#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTWDCrowdColliderManager.generated.h"

class UOTWDBoxComponent;
class UOTWDSphereComponent;

UCLASS(Blueprintable)
class OTWD_API AOTWDCrowdColliderManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDSphereComponent*> SphereColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDBoxComponent*> BoxColliders;
    
public:
    AOTWDCrowdColliderManager();
};

