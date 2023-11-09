#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZLocationFeedbackData.h"
#include "SBZLocationFeedbackType.h"
#include "SBZPlayerDirectionalFeedbackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerDirectionalFeedbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpectedMaxFeedbacksVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLocationFeedbackType> ValidFeedbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeVisibleFeedback;
    
    USBZPlayerDirectionalFeedbackComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisibleFeedbacksList(TArray<FSBZLocationFeedbackData>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSizeOfVisibleFeedbacksList() const;
    
};

