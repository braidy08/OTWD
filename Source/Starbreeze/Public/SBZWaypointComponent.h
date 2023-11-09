#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZWaypointComponent.generated.h"

class USBZUIMarker;
class USBZUIMarkerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZWaypointComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UIMarkerData, meta=(AllowPrivateAccess=true))
    USBZUIMarkerData* UIMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIMarker* UIMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVisible, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
public:
    USBZWaypointComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUIMarkerData(USBZUIMarkerData* NewMarkerData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMarkerVisible(bool bInVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UIMarkerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVisible();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkerVisible() const;
    
};

