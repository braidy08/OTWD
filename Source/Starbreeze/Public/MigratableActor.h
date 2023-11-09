#pragma once
#include "CoreMinimal.h"
#include "MigratableActor.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMigratableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SpawnableTemplate;
    
public:
    STARBREEZE_API FMigratableActor();
};

