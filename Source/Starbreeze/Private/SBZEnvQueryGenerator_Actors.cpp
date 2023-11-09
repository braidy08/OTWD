#include "SBZEnvQueryGenerator_Actors.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryGenerator_Actors::USBZEnvQueryGenerator_Actors() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

