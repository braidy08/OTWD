#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZProximitySensorNavLinkManager.generated.h"

class ASBZProximitySensorNavLinkManager;
class ASBZProximitySensorNavLinkProxy;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZProximitySensorNavLinkManager : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComputedCharacterPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointCheckHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavLinkOctreeBoundsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavLinkOctreeBoundsHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZProximitySensorNavLinkProxy*> NavLinks;
    
public:
    ASBZProximitySensorNavLinkManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZProximitySensorNavLinkManager* GetProximitySensorNavLinkManager(UObject* WorldContextObject);
    
};

