#include "SBZShutter.h"
#include "Components/SceneComponent.h"
#include "SBZNavModifierBoxComponent.h"

ASBZShutter::ASBZShutter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->InitialOpenPercentage = 1;
    this->ShutterHeight = 1;
    this->NavigationTriggerPoint = 1;
    this->ShutterSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Shutter Scene Component"));
    this->bShoveOnRelativeXAxis = true;
    this->bShoveOnRelativeYAxis = false;
    this->bShoveOnRelativeZAxis = false;
    this->ShutterShoveRecoveryTime = 1;
    this->NavModifierComponent = CreateDefaultSubobject<USBZNavModifierBoxComponent>(TEXT("Nav Modifier Component"));
    this->CachedShoveMagnitude = 1;
    this->AnimationPositionCurve = NULL;
    this->AnimationPositionCurveMinTime = 1;
    this->AnimationPositionCurveMaxTime = 1;
    this->AnimationElapsedTime = 1;
    this->PercentageOpen = 1;
    this->AnimateToValue = 1;
    this->AnimateSpeed = 1;
    this->bIsAnimating = false;
    this->ShutterState = ESBZShutterState::Stationary;
    this->NavModifierComponent->SetupAttachment(RootComponent);
    this->ShutterSceneComponent->SetupAttachment(RootComponent);
}

void ASBZShutter::SetOpenPercentage(float InOpenPercentage) {
}

ESBZShutterState ASBZShutter::GetShutterState() const {
    return ESBZShutterState::Stationary;
}

float ASBZShutter::GetShutterHeight() const {
    return 0.0f;
}

float ASBZShutter::GetOpenPercentage() const {
    return 0.0f;
}

void ASBZShutter::ClearAllAnimationEvents() {
}

void ASBZShutter::AnimateWithCurve(UCurveFloat* InAnimationCurve) {
}

void ASBZShutter::AnimateToOpenPercentageIn(float InOpenPercentage, float TimeToAnimate) {
}

void ASBZShutter::AnimateToOpenPercentage(float InOpenPercentage, float InOpenSpeed) {
}

void ASBZShutter::AddAnimationEvent(const FSBZShutterAnimationEvent& InAnimationEvent) {
}


