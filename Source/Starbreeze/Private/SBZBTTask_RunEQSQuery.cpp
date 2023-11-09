#include "SBZBTTask_RunEQSQuery.h"

USBZBTTask_RunEQSQuery::USBZBTTask_RunEQSQuery() {
    this->QueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->MaxNumOfItems = 0;
}

