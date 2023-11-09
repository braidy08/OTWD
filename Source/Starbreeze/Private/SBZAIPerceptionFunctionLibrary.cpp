#include "SBZAIPerceptionFunctionLibrary.h"
#include "Templates/SubclassOf.h"

bool USBZAIPerceptionFunctionLibrary::UnregisterPerceptionStimuliSource(UObject* WorldContext, TSubclassOf<UAISense> Sense, AActor* Target) {
    return false;
}

USBZAIPerceptionFunctionLibrary::USBZAIPerceptionFunctionLibrary() {
}

