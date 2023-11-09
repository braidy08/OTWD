#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIGoalChangedDelegateDelegate.h"
#include "AIGoalData.h"
#include "AIGoalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class OTWD_API UAIGoalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIGoalData CurrentGoal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIGoalChangedDelegate OnGoalChanged;
    
    UAIGoalComponent();
};

