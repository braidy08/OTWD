#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SBZPlayerLoadout.h"
#include "SBZGameModeBase.generated.h"

class AActor;
class ASBZPlayerController;
class USBZGameInstance;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadyBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SeamlessActors;
    
public:
    ASBZGameModeBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSBZPlayerLoadout ValidateLoadoutForPlayerController(ASBZPlayerController* PlayerController, const FSBZPlayerLoadout& NewLoadout);
    
    UFUNCTION(BlueprintCallable)
    void TryTriggerGameModeReadyEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetJoinableStatus(bool bJoinableStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsGameModeReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleGameReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleGameModeReady();
    
    UFUNCTION(BlueprintCallable)
    USBZGameInstance* GetSBZGameInstance();
    
    UFUNCTION(BlueprintCallable)
    void AddSeamlessActor(AActor* Actor);
    
};

