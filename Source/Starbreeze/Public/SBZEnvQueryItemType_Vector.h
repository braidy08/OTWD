#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"
#include "SBZEnvQueryItemType_Vector.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZEnvQueryItemType_Vector : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    USBZEnvQueryItemType_Vector();
};

