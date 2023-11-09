#include "SBZAimAssistComponent.h"

FSBZAimAssistResult USBZAimAssistComponent::TickAimAssist(float DeltaTime, bool bHandlePlayerRotation) {
    return FSBZAimAssistResult{};
}

void USBZAimAssistComponent::SetDebug(bool _bDebug) {
}

bool USBZAimAssistComponent::GetBulletDeviation(FVector Start, FVector Direction, float MaxDistance, FVector& DeviationPoint) {
    return false;
}

USBZAimAssistComponent::USBZAimAssistComponent() {
    this->bDebug = false;
    this->HeadBoneName = TEXT("Head");
    this->CurTarget = NULL;
    this->CurPlayer = NULL;
    this->CurPlayerController = NULL;
    this->CurWeapon = NULL;
    this->CurSchematics = NULL;
}

