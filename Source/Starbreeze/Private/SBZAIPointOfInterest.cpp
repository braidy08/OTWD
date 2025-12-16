#include "SBZAIPointOfInterest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASBZAIPointOfInterest::ASBZAIPointOfInterest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->bEnabled = true;
    this->Priority = 0;
    this->Usages = 0;
    this->CoolDown = 1;
    this->AbortCooldown = 1;
    this->bDetectWithVisualPerception = true;
    this->DetectWithRadius = 1;
    this->bAbortOnAlertnessChange = true;
    this->bAbortOnInterruption = true;
    this->TriggerRadius = 1;
    this->bFaceDirection = false;
    this->Next = NULL;
    this->Dependency = NULL;
    this->bSearchNode = false;
    this->bSearchForceVisit = true;
    this->Visitor = NULL;
}

bool ASBZAIPointOfInterest::Validate(ASBZAICharacter* Character) {
    return false;
}

void ASBZAIPointOfInterest::SetupReactions(TArray<FPointOfInterestReaction> Reactions) {
}

void ASBZAIPointOfInterest::Enable(bool bState) {
}

bool ASBZAIPointOfInterest::AssignClosest(const FSBZFactionIdHelper& Faction, float SearchRadius) {
    return false;
}

bool ASBZAIPointOfInterest::Assign(ASBZAICharacter* Character) {
    return false;
}


