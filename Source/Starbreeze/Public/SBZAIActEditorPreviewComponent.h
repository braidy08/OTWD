#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EActAnimationPreview.h"
#include "SBZAIActEditorPreviewComponent.generated.h"

class UAnimSequenceBase;
class ULineBatchComponent;
class USBZActAnimationSetSchematic;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIActEditorPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* LineBatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewAnimationPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActAnimationPreview PreviewAnimStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActAnimationSetSchematic* PreviewAnimSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* CachedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CachedAnimation;
    
public:
    USBZAIActEditorPreviewComponent(const FObjectInitializer& ObjectInitializer);

};

