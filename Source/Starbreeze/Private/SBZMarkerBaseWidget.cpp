#include "SBZMarkerBaseWidget.h"

USBZUIMarkerBase* USBZMarkerBaseWidget::GetMarker() const {
    return NULL;
}

USBZMarkerBaseWidget::USBZMarkerBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Marker = NULL;
}

