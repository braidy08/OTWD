#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMarkedManagerWidget.generated.h"

class AActor;
class ASBZCharacter;
class UGameplayEffect;
class USBZMarkerBaseWidget;
class USBZUIMarkerBase;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMarkedManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMarkerBaseWidget> MarkedWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> MarkedGameplayEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZUIMarkerBase*> MarkerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorStack;
    
public:
    USBZMarkedManagerWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnActorMarked(AActor* Actor, bool bIsMarked);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* Actor);
    
};

