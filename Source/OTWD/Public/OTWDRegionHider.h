#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTWDRegionHider.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class OTWD_API AOTWDRegionHider : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HideRegion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ManualHideIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseManualHideIndex;
    
    AOTWDRegionHider();
};

