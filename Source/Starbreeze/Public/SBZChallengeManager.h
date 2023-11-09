#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZChallengeManager.generated.h"

class USBZAchievement;
class USBZChallengeManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZChallengeManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAchievement* Achievements;
    
public:
    USBZChallengeManager();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChallengeManager* GetChallengeManager(UObject* WorldContextObject);
    
};

