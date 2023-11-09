#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZInteractionWidget.generated.h"

class USBZBaseInteractorComponent;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZInteractionWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractorComponent* Interactor;
    
public:
    USBZInteractionWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseInteractorComponent* GetInteractor() const;
    
};

