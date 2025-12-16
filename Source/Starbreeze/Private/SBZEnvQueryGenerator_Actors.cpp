#include "SBZEnvQueryGenerator_Actors.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

USBZEnvQueryGenerator_Actors::USBZEnvQueryGenerator_Actors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}


