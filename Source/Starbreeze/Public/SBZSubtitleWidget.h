#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZSubtitleWidget.generated.h"

class USBZGameUserSettings;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSubtitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTimePerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringTableName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameUserSettings* GameSettings;
    
public:
    USBZSubtitleWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSubtitleTextPanel(UTextBlock* TextWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetGameUserSettings(USBZGameUserSettings* InGameUserSettings);
    
};

