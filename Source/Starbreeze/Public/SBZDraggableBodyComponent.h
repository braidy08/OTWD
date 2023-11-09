#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BodyDragEndedDelegate.h"
#include "BodyDragStartedDelegate.h"
#include "SBZBodyDraggingBoneBlendData.h"
#include "SBZCameraViewRestriction.h"
#include "SBZDraggableBodyComponent.generated.h"

class USBZBodyDraggingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZDraggableBodyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyDragStarted BodyDragStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyDragEnded BodyDragEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBodyDraggingComponent* GrabbedComponennt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictCameraView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCameraViewRestriction RelativeCameraRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullBodyRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBodyDraggingBoneBlendData> BonesToBlend;
    
public:
    USBZDraggableBodyComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragStarted(USBZBodyDraggingComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragEnded(USBZBodyDraggingComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBeingDragged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBodyDraggingComponent* GetDraggedBy() const;
    
};

