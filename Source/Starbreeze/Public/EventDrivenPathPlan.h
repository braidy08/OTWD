#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PathSectionPlan.h"
#include "EventDrivenPathPlan.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API UEventDrivenPathPlan : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathSectionPlan> SectionPlans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseExitNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseSectionGoalsAsGuides;
    
    UEventDrivenPathPlan();
};

