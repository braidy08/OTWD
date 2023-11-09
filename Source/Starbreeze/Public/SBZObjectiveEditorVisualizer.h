#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZObjectiveEditorVisualizer.generated.h"

class USBZObjectiveComponent;
class USBZObjectiveSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZObjectiveEditorVisualizer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* ObjectiveSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectiveComponent* ObjectiveComponent;
    
public:
    ASBZObjectiveEditorVisualizer();
};

