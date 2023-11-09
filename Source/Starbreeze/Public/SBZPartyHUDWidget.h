#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZPartyHUDWidget.generated.h"

class APlayerState;
class UPanelWidget;
class USBZPartyMemberHUDWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPartyHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPartyMemberHUDWidget> PartyMemberBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPartyFrames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* PartyPanel;
    
public:
    USBZPartyHUDWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UPanelWidget* PartyPanelWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerRemoved(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerAdded(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionStateReady();
    
};

