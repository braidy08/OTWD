#pragma once
#include "CoreMinimal.h"
#include "SBZAimAssistSchematic.h"
#include "SBZSchematic.h"
#include "SBZAimAssistsSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAimAssistsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAimAssistSchematic Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAimAssistSchematic Joypad;
    
    USBZAimAssistsSchematic();
    UFUNCTION(BlueprintCallable)
    void UseJoypad(bool _bUseJoypad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAimAssistSchematic GetCurrentSchematic() const;
    
};

