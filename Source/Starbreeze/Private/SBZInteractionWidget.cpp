#include "SBZInteractionWidget.h"


USBZBaseInteractorComponent* USBZInteractionWidget::GetInteractor() const {
    return NULL;
}

USBZInteractionWidget::USBZInteractionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Interactor = NULL;
}

