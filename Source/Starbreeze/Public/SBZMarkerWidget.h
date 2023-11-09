#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZMarkerWidget.generated.h"

class AActor;
class USBZObjectiveSchematic;
class USBZUIMarker;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMarkerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIMarker* Marker;
    
public:
    USBZMarkerWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshOpacity();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLookingAtMarker(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAssign(USBZObjectiveSchematic* ObjectiveSchematics);
    
    UFUNCTION(BlueprintCallable)
    void OnLocationAssign(AActor* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZUIMarker* GetMarker() const;
    
};

