#include "SBZMarkerSingleWidget.h"

USBZUIMarkerSingle* USBZMarkerSingleWidget::GetMarker() const {
    return NULL;
}

USBZMarkerSingleWidget::USBZMarkerSingleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Marker = NULL;
}

