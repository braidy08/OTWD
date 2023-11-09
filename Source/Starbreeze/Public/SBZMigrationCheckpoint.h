#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MigratableActor.h"
#include "Templates/SubclassOf.h"
#include "SBZMigrationCheckpoint.generated.h"

class USBZAICharacterSchematic;
class USBZGameSave;

UCLASS(Blueprintable)
class USBZMigrationCheckpoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMigratableActor> SavedActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, USBZAICharacterSchematic*> SaveAISchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMigratableActor> SavedLevelScripts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGameSave> GameSaveDataClass;
    
public:
    USBZMigrationCheckpoint();
};

