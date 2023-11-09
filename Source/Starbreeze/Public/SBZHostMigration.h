#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SBZHostMigration.generated.h"

class APlayerState;
class USBZGameSave;
class USBZHostMigration;
class USBZMigrationCheckpoint;

UCLASS(Blueprintable)
class STARBREEZE_API USBZHostMigration : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpToLevelScriptCheckpoint, int32, ScriptCheckpointIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpToLevelScriptCheckpoint OnJumpToLevelScriptCheckpoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGameSave> GameSaveDataClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyHostIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMigrationCheckpoint* MigrationCheckpoint;
    
public:
    USBZHostMigration();
private:
    UFUNCTION(BlueprintCallable)
    void SetNextHost();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentLevelScriptCheckpoint(UObject* WorldContextObject, int32 ScriptCheckpointIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProgress() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayersChanged(APlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZHostMigration* GetHostMigrationFromContext(UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevelScriptCheckpoint() const;
    
};

