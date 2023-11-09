#include "SBZAIPatrolPoint.h"
#include "Components/SphereComponent.h"

ASBZAIPatrolPoint::ASBZAIPatrolPoint() {
    this->NextPoint = NULL;
    this->bReversePoint = false;
    this->bFaceDirection = false;
    this->FaceDirectionRandomOffset = 1;
    this->bIsNewlyCreatedObject = true;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PatrolNodeRootMesh"));
}

