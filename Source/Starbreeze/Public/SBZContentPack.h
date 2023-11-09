#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZContentPack.generated.h"

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZContentPack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverBePurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamAppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PSNEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XboxProductId;
    
    USBZContentPack();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePurchased() const;
    
};

