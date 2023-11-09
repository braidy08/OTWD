#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "OnArmorPartRemovedDelegate.h"
#include "SBZArmorPartChildActor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZArmorPartChildActor : public UChildActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArmorPartRemoved OnArmorPartRemoved;
    
    USBZArmorPartChildActor();
};

