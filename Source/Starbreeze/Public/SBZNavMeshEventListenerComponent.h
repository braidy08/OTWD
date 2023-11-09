#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AIOnNavMeshNodeDelegateDelegate.h"
#include "SBZNavMeshEventListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZNavMeshEventListenerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIOnNavMeshNodeDelegate OnListenedNavMeshRefTargeted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenAlsoNextNodeChange;
    
public:
    USBZNavMeshEventListenerComponent();
};

