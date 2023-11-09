#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EThreatEnum.h"
#include "OTWDMetagameMissionThreat.generated.h"

class UOTWDMetagameSurvivorClassDataAsset;
class UTexture2D;

UCLASS(Blueprintable, Const)
class OTWD_API UOTWDMetagameMissionThreat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreatEnum ThreatId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivorClassDataAsset*> ClassCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessPenalty;
    
    UOTWDMetagameMissionThreat();
};

