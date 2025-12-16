#include "SBZEnvQueryGenerator_SimpleGridExt.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryGenerator_SimpleGridExt::USBZEnvQueryGenerator_SimpleGridExt() {
    this->bDonutShape = false;
    this->bRandomizeLocation = false;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


