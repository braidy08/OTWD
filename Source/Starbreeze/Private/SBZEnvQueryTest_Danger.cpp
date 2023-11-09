#include "SBZEnvQueryTest_Danger.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UDEPRECATED_SBZEnvQueryTest_Danger::UDEPRECATED_SBZEnvQueryTest_Danger() {
    this->AgentContext = UEnvQueryContext_Querier::StaticClass();
}

