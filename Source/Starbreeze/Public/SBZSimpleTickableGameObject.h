#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSimpleTickableGameObject.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class USBZSimpleTickableGameObject : public UObject {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    //FSimpleTickDelegate TickDelegate;
    
    USBZSimpleTickableGameObject();
};

