#include "SBZSentryComponent.h"
#include "Net/UnrealNetwork.h"

void USBZSentryComponent::SetupSplitRotationRoot(USceneComponent* InRotationPitchRoot, USceneComponent* InRotationYawRoot) {
}

void USBZSentryComponent::SetupSeparateRotAxis(USceneComponent* InRotationPitchRoot, USceneComponent* InRotationYawRoot, UPrimitiveComponent* InDetectionShape, USceneComponent* InRayStartPoint) {
}

void USBZSentryComponent::SetupRotationRoot(USceneComponent* InRotationRoot) {
}

void USBZSentryComponent::SetupRayStartPoint(USceneComponent* InRayStartPoint) {
}

void USBZSentryComponent::SetupDetectionShape(UPrimitiveComponent* InDetectionShape) {
}

void USBZSentryComponent::Setup(USceneComponent* InRotationRoot, UPrimitiveComponent* InDetectionShape, USceneComponent* InRayStartPoint) {
}

void USBZSentryComponent::SetMotionEnabled(bool bInEnabled) {
}

void USBZSentryComponent::SetDetectionEnabled(bool bInEnabled) {
}

void USBZSentryComponent::OnRep_DetectedActors() {
}

void USBZSentryComponent::MulticastUpdateClientRotation_Implementation(float Timestamp, FVector_NetQuantizeNormal InCurrentRotation, FVector_NetQuantizeNormal InTargetRotation) {
}

void USBZSentryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZSentryComponent, RotationRoot);
    DOREPLIFETIME(USBZSentryComponent, RotationYawRoot);
    DOREPLIFETIME(USBZSentryComponent, DetectedActors);
    DOREPLIFETIME(USBZSentryComponent, FollowTarget);
}

USBZSentryComponent::USBZSentryComponent() {
    this->bMotionEnabled = true;
    this->RotationRoot = NULL;
    this->RotationYawRoot = NULL;
    this->DetectionMotionBehavior = ESentryDetectionMotionBehavior::eStopMoving;
    this->RotationSpeed = 1;
    this->DefaultTargetYawMin = 1;
    this->DefaultTargetYawMax = 1;
    this->DefaultTargetPitchMin = 1;
    this->DefaultTargetPitchMax = 1;
    this->HorizontalAngularLimitMin = 1;
    this->HorizontalAngularLimitMax = 1;
    this->VerticalAngularLimitMin = 1;
    this->VerticalAngularLimitMax = 1;
    this->bUseViewpoints = false;
    this->CurrentCheckpointIndex = 0;
    this->bStopAtViewpoint = false;
    this->ViewpointStopDelay = 1;
    this->ViewpointDelayTimer = 1;
    this->bReverseOnEnd = false;
    this->bReversing = false;
    this->bDetectionEnabled = true;
    this->bShouldUseClassFilter = false;
    this->bShouldDoAttitudeCheck = false;
    this->DetectAttitudes = 0;
    this->RayStartPoint = NULL;
    this->RayLength = 1;
    this->DetectionVolume = NULL;
    this->bDetectOnlyActorsWithinAngle = false;
    this->AngleToDetectActorsWithin = 1;
    this->DetectionType = EDetectionType::eRay;
    this->bRequiresLineOfSight = true;
    this->bManualTargetSelection = false;
    this->FollowDetectedTargetForgetTimeout = 1;
    this->FollowTarget = NULL;
    this->LatestTimeStamp = 1;
    this->bIsAtViewpoint = false;
    this->bIsAtEnd = true;
    this->FollowForgetTimer = 1;
}

