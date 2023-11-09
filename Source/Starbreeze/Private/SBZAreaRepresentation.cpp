#include "SBZAreaRepresentation.h"

TArray<ASBZAreaRepresentation*> ASBZAreaRepresentation::GetAreaRepresentationList(UObject* WorldContextObject) {
    return TArray<ASBZAreaRepresentation*>();
}

ASBZAreaRepresentation::ASBZAreaRepresentation() {
    this->CoolDown = 1;
}

