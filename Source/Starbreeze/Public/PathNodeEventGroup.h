#pragma once
#include "CoreMinimal.h"
#include "PathNodeEvent.h"
#include "PathNodeEventGroup.generated.h"

UCLASS(Blueprintable)
class APathNodeEventGroup : public APathNodeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNodeEvent*> NodeEventActors;
    
    APathNodeEventGroup();
};

