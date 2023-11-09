#include "SBZGrenade.h"
#include "AkComponent.h"
#include "SBZDirectionalFeedbackComponent.h"

void ASBZGrenade::OnHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZGrenade::OnDetonate() {
}

void ASBZGrenade::OnDelayedEvent() {
}

float ASBZGrenade::GetDetonationTime() const {
    return 0.0f;
}

void ASBZGrenade::DrawDebugSphere() {
}

void ASBZGrenade::Detonate() {
}


ASBZGrenade::ASBZGrenade() {
    this->Radius = 1;
    this->DirectionalFeedbackComponent = CreateDefaultSubobject<USBZDirectionalFeedbackComponent>(TEXT("DirectionalFeedbackComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ThrowEvent = NULL;
    this->DetonationEvent = NULL;
    this->DelayedEvent = NULL;
    this->DelayedTime = 1;
    this->DetonationTime = 1;
    this->bDrawDebugSphere = true;
    this->bDetonateOnCollision = false;
}

