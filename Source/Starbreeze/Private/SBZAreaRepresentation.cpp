#include "SBZAreaRepresentation.h"
#include "Components/SceneComponent.h"

ASBZAreaRepresentation::ASBZAreaRepresentation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->CoolDown = 1;
}

TArray<ASBZAreaRepresentation*> ASBZAreaRepresentation::GetAreaRepresentationList(UObject* WorldContextObject) {
    return TArray<ASBZAreaRepresentation*>();
}


