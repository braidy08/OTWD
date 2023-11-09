#pragma once
#include "CoreMinimal.h"
#include "SBZItemWidget.generated.h"

class USBZKeyItemWidget;

USTRUCT(BlueprintType)
struct FSBZItemWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZKeyItemWidget*> ItemWidgets;
    
    STARBREEZE_API FSBZItemWidget();
};

