#include "OTWDSentryComponent.h"

UOTWDSentryComponent::UOTWDSentryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomDetectionComponent = NULL;
}

void UOTWDSentryComponent::SetupCustomDetectionComponent(USceneComponent* InCustomDetectionComponent) {
}


