#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/CapsuleComponent.h"
#include "SBZMacroCollisionHandle.h"
#include "SBZMacroCapsuleComponent.generated.h"

class UObject;

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UDEPRECATED_SBZMacroCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_SBZMacroCapsuleComponent();
    UFUNCTION(BlueprintCallable)
    static void DeactivateCollision(const FSBZMacroCollisionHandle& Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZMacroCollisionHandle ActivateCollisionInSphere(const UObject* WorldContextObject, const FVector& Origin, const float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZMacroCollisionHandle ActivateCollisionInLine(const UObject* WorldContextObject, const FVector& Start, const FVector& End);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZMacroCollisionHandle ActivateCollisionInBox(const UObject* WorldContextObject, const FVector& Origin, const FQuat& Rotation, const FVector& Size);
    
};

