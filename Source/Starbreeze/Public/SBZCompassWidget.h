#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZCompassWidget.generated.h"

class AActor;
class ASBZCharacter;
class UCanvasPanel;
class UImage;
class USBZCompassMarkerSchematic;
class USBZCompassMarkerWidget;
class USBZGenericImageWidget;
class USBZMarkerConstruct;
class USBZObjectiveSchematic;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZCompassWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCompassMarkerWidget> CompassMarkerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMarkerConstruct*> CompassMarkerBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CompassMarkerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerUpdateRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetricDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNativeCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNativeMarkers;
    
public:
    USBZCompassWidget();
    UFUNCTION(BlueprintCallable)
    void SetupCompass(UImage* CompassGrid, UCanvasPanel* CanvasPanel);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWhenCharacterKilled(ASBZCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveMarker(int32 SchematicObjectiveIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorMarker(AActor* TargetActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMarkerActorDestroy(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateMarker(USBZMarkerConstruct* MarkerConstruct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMarkerVisible(USBZGenericImageWidget* GenericImageWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMarkerHidden(USBZGenericImageWidget* GenericImageWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActorMarkerAdded(USBZGenericImageWidget* GenericImageWidget, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable)
    void AddActorMarker(int32 UID, AActor* TargetActor, USBZCompassMarkerSchematic* CompassMarkerSchematic, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable)
    void AddActorCompassMarker(USBZObjectiveSchematic* ObjectiveSchematic, USBZCompassMarkerSchematic* ActorMarkerSchematic, int32 ObjectiveSchematicIndex, AActor* OwnerActor);
    
};

