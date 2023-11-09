#include "SBZHardPoint.h"
#include "SBZHardPointRecruitmentBoxComponent.h"
#include "SBZHardPointRecruitmentSphereComponent.h"

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

ASBZHardPoint::ASBZHardPoint() {
    this->bIsTopParentHardPoint = true;
    this->bEnableHardPoint = true;
    this->bUseHardPointVolume = false;
    this->RecruitmentBox = CreateDefaultSubobject<USBZHardPointRecruitmentBoxComponent>(TEXT("RecruitmentBox"));
    this->RecruitmentSphere = CreateDefaultSubobject<USBZHardPointRecruitmentSphereComponent>(TEXT("RecruitmentSphere"));
}

