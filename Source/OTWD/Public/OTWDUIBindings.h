#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOTWDNextMenu.h"
#include "OTWDUIBindings.generated.h"

class UOTWDGameInstance;

UCLASS(Blueprintable)
class UOTWDUIBindings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMissionReport;
    
    UOTWDUIBindings();
    UFUNCTION(BlueprintCallable)
    void SetNextMenuMissionReport();
    
    UFUNCTION(BlueprintCallable)
    void SetNextMenu(EOTWDNextMenu Menu);
    
    UFUNCTION(BlueprintCallable)
    void Init(UOTWDGameInstance* NewGameInstance);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateEntered(FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    EOTWDNextMenu GetNextMenu(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowLobby();
    
};

