#include "SBZAIPerceptionFunctionLibrary.h"
#include "Templates/SubclassOf.h"

USBZAIPerceptionFunctionLibrary::USBZAIPerceptionFunctionLibrary() {
}

bool USBZAIPerceptionFunctionLibrary::UnregisterPerceptionStimuliSource(UObject* WorldContext, TSubclassOf<UAISense> Sense, AActor* Target) {
    return false;
}


