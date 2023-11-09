#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZAnimNotify_BaseNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_BaseNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockedOnPlayerLegs;
    
public:
    USBZAnimNotify_BaseNotify();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NotifyAllowed(USkeletalMeshComponent* InMesh) const;
    
};

