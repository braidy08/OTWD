#include "SBZAlertManagerWidget.h"

USBZAlertManagerWidget::USBZAlertManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxAlertMarkersPC = 0;
    this->MaxAlertMarkersConsole = 0;
    this->AlertWidgetBlueprint = NULL;
    this->MaxDistanceFromPlayer = 1;
    this->ManagerFPSLockPC = 0;
    this->ManagerFPSLockConsole = 0;
    this->WorldSettings = NULL;
    this->MaxDistanceSquared = 1;
}

