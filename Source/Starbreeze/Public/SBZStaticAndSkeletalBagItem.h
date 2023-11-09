#pragma once
#include "CoreMinimal.h"
#include "SBZStaticBagItem.h"
#include "SBZStaticAndSkeletalBagItem.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStaticAndSkeletalBagItem : public ASBZStaticBagItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThrownMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionBoxShape;
    
public:
    ASBZStaticAndSkeletalBagItem();
};

