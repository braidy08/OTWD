#pragma once
#include "CoreMinimal.h"
#include "SBZGameSave.h"
#include "SBZMigrationGameSave.generated.h"

class ASBZSpawnerBase;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMigrationGameSave : public USBZGameSave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, TWeakObjectPtr<ASBZSpawnerBase>> CachedSpawners;
    
public:
    USBZMigrationGameSave();
};

