#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZAnimNotifyState_BaseNotifyState.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAnimNotifyState_BaseNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockedOnPlayerLegs;
    
public:
    USBZAnimNotifyState_BaseNotifyState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NotifyAllowed(USkeletalMeshComponent* InMesh) const;
    
};

