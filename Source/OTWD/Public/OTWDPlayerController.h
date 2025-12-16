#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPlayerController -FallbackName=SBZPlayerController
#include "OnUnlockedLibraryItemDelegate.h"
#include "Templates/SubclassOf.h"
#include "OTWDPlayerController.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable)
class OTWD_API AOTWDPlayerController : public ASBZPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnlockedLibraryItem OnUnlockedLibraryItemDelegate;
    
    AOTWDPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayAbility> GetToolAbility();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayAbility> GetSignatureAbility();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayAbility> GetSecondaryAbility();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayAbility> GetDefenceAbility();
    
};

