#pragma once
#include "CoreMinimal.h"
#include "SBZGrantedEffects.h"
#include "SBZUnlockable.h"
#include "SBZTech.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class STARBREEZE_API USBZTech : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGrantedEffects> GrantedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DisplayFormattingArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeAppliedToWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeAppliedToCharacter;
    
    USBZTech();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadoutRelevant() const;
    
};

