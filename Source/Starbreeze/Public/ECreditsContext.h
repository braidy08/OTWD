#pragma once
#include "CoreMinimal.h"
#include "ECreditsContext.generated.h"

UENUM(BlueprintType)
enum class ECreditsContext : uint8 {
    MainTitle,
    SubTitle,
    DepartmentTitle,
    Name,
    None,
};

