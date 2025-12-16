#include "SBZAIPatrolPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASBZAIPatrolPoint::ASBZAIPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PatrolNodeRootMesh"));
    this->NextPoint = NULL;
    this->bReversePoint = false;
    this->bFaceDirection = false;
    this->FaceDirectionRandomOffset = 1;
    this->bIsNewlyCreatedObject = true;
    this->SphereComponent = (USphereComponent*)RootComponent;
}


