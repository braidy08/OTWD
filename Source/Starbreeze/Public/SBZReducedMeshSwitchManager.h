#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZReducedMeshSwitchManager.generated.h"

class USBZReducedMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZReducedMeshSwitchManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZReducedMeshComponent*> ReducedMeshComponents;
    
    ASBZReducedMeshSwitchManager();
};

