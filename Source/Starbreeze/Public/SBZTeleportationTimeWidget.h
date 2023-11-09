#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZEndMissionHandlerState.h"
#include "SBZTeleportationTimeWidget.generated.h"

class ASBZPlayerCharacter;
class USBZGameInstance;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZTeleportationTimeWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZEndMissionHandlerState, FString> TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringTableName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DontDisplayAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* WarningWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
public:
    USBZTeleportationTimeWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidget(UTextBlock* TimerText, UTextBlock* WarningText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShowTeleportationTime(float TimeLeft, ESBZEndMissionHandlerState CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void OnHideTeleportationTime();
    
};

