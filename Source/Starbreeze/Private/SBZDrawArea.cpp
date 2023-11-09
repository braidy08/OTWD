#include "SBZDrawArea.h"

void USBZDrawArea::ToggleDebug() {
}

void USBZDrawArea::SetPenToWrite() {
}

void USBZDrawArea::SetPenToErase() {
}

bool USBZDrawArea::IsDrawing() {
    return false;
}

void USBZDrawArea::InitializeReplicationManager() {
}

void USBZDrawArea::ExecuteDebug() {
}

void USBZDrawArea::DrawTimerFunction() {
}

void USBZDrawArea::ClearDrawing() {
}

FLinearColor USBZDrawArea::CalculateUserColor(int32 Seed) {
    return FLinearColor{};
}

USBZDrawArea::USBZDrawArea() {
    this->DrawUpdateIntervall = 1;
    this->DrawInterpolationSpeed = 1;
    this->DrawUpdateTolerance = 1;
    this->EligibleDrawKeys.AddDefaulted(1);
    this->DisplayMaterialInstance = NULL;
    this->ReplicationPenMaterialInstance = NULL;
    this->ReplicationBufferRenderMaterialInstance = NULL;
    this->ReplicationManager = NULL;
}

