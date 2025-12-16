#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPartyMemberHUDWidget -FallbackName=SBZPartyMemberHUDWidget
#include "OTWDPartyMemberHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDPartyMemberHUDWidget : public USBZPartyMemberHUDWidget {
    GENERATED_BODY()
public:
    UOTWDPartyMemberHUDWidget();

};

