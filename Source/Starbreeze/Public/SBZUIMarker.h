#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SBZUIMarker.generated.h"

class AActor;
class USBZMarkerWidget;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIMarker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CenterScreenBoundingBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMarkerWidget* OnScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMarkerWidget* OffScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    USBZUIMarker();
    UFUNCTION(BlueprintCallable)
    void StartFade(float InTargetAlpha, float InDelay, float InFadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetOnScreenIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetOffScreenIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeAlpha(float InTargetAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowDistance(bool ShowDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWidgetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable)
    USBZMarkerWidget* GetOnScreenWidget();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetOnScreenIcon();
    
    UFUNCTION(BlueprintCallable)
    USBZMarkerWidget* GetOffScreenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffScreenRotationAngle() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetOffScreenIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowDistance() const;
    
};

