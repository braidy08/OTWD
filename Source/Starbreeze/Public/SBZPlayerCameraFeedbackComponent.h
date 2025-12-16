#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZLocalPlayerFeedbackInfo.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerCameraFeedbackComponent.generated.h"

class ASBZPlayerCameraManager;
class UObject;
class USBZLocalPlayerFeedback;
class USBZPlayerCameraFeedbackComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=SBZPlayerCameraManager, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerCameraFeedbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLocalPlayerFeedbackInfo> CurrentFeedbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCameraManager* PlayerCameraOwner;
    
public:
    USBZPlayerCameraFeedbackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RemoveFeedback(int32 RemoveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPlayerCameraFeedbackComponent* GetLocalCameraFeedbackComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool FadeOutFeedback(int32 RemoveID);
    
    UFUNCTION(BlueprintCallable)
    int32 AddFeedback(TSubclassOf<USBZLocalPlayerFeedback> InFeedbackClass, float Intensity);
    
};

