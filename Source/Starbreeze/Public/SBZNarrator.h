#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZNarrator.generated.h"

class USBZCharacterVoiceComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNarrator : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
public:
    ASBZNarrator();
};

