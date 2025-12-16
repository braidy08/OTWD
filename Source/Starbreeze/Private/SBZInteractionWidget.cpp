#include "SBZInteractionWidget.h"

USBZInteractionWidget::USBZInteractionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Interactor = NULL;
}


USBZBaseInteractorComponent* USBZInteractionWidget::GetInteractor() const {
    return NULL;
}


