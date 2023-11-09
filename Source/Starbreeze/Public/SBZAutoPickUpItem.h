#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAutoPickUpItem.generated.h"

class APlayerController;
class UBoxComponent;
class USBZOutlineComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZAutoPickUpItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatePickupInstanceForEachPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereTriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
public:
    ASBZAutoPickUpItem();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryPickUpItem(APlayerController* PlayerController);
    
};

