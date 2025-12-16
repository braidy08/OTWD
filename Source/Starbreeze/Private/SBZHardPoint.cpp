#include "SBZHardPoint.h"
#include "Components/SceneComponent.h"
#include "SBZHardPointRecruitmentBoxComponent.h"
#include "SBZHardPointRecruitmentSphereComponent.h"

ASBZHardPoint::ASBZHardPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bIsTopParentHardPoint = true;
    this->bEnableHardPoint = true;
    this->bUseHardPointVolume = false;
    this->RecruitmentBox = CreateDefaultSubobject<USBZHardPointRecruitmentBoxComponent>(TEXT("RecruitmentBox"));
    this->RecruitmentSphere = CreateDefaultSubobject<USBZHardPointRecruitmentSphereComponent>(TEXT("RecruitmentSphere"));
    this->RecruitmentSphere->SetupAttachment(RootComponent);
    this->RecruitmentBox->SetupAttachment(RootComponent);
}

void ASBZHardPoint::PopAllDefenders() {
}

int32 ASBZHardPoint::GetMinNumberOfDefenders() const {
    return 0;
}

int32 ASBZHardPoint::GetMaxNumberOfDefenders() const {
    return 0;
}

int32 ASBZHardPoint::GetCurNumberOfDefenders() const {
    return 0;
}

TArray<APawn*> ASBZHardPoint::GetAllDefenderPawns() const {
    return TArray<APawn*>();
}

void ASBZHardPoint::EnableAtRuntime() {
}

void ASBZHardPoint::DisableAtRuntime() {
}


