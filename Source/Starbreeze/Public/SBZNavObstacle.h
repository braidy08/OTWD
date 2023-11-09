#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "AI/Navigation/NavModifierComponent.h"
#include "SBZNavObstacle.generated.h"

class UBoxComponent;
class UNavArea;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNavObstacle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> EnabledNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> DisabledNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    ASBZNavObstacle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableObstacle();
    
    UFUNCTION(BlueprintCallable)
    void DisableObstacle();
    
};

