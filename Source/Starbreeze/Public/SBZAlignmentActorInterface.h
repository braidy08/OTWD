#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SBZAlignmentActorInterface.generated.h"

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZAlignmentActorInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZAlignmentActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool GetSocketActorSpaceTransformFromActiveAnimation(const FName SocketName, FTransform& Transform) PURE_VIRTUAL(GetSocketActorSpaceTransformFromActiveAnimation, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetSocketActorSpaceTransform(FName SocketName, FName Tag, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAlignmentPointTransform(FTransform& Transform);
    
};

