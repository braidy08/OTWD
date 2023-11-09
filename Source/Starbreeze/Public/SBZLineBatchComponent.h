#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/LineBatchComponent.h"
#include "SBZLineBatchComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZLineBatchComponent : public ULineBatchComponent {
    GENERATED_BODY()
public:
    USBZLineBatchComponent();
    UFUNCTION(BlueprintCallable)
    void DrawSolidBox(const FTransform& Transform, const FVector HalfSize, const FColor Color, uint8 DepthPriority, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void DrawPoint2(const FVector& Position, float Size, const FColor Color, uint8 DepthPriority, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void DrawLine2(const FVector& Start, const FVector& End, float Thickness, const FColor Color, uint8 DepthPriority, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void DrawDirectionalArrow(const FTransform& Transform, float Length, float ArrowSize, const FColor Color, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable)
    void DrawCircle(const FTransform& Transform, float Radius, const FColor Color, int32 NumSides, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable)
    void DrawBox(const FTransform& Transform, const FVector HalfSize, const FColor Color, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDraw();
    
};

