#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZCrawlAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCrawlAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrengthRequiredToStandup, meta=(AllowPrivateAccess=true))
    float StrengthRequiredToStandup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrengthMaximumRequiredToStandup, meta=(AllowPrivateAccess=true))
    float StrengthMaximumRequiredToStandup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrengthGatherRate, meta=(AllowPrivateAccess=true))
    float StrengthGatherRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HelpStandMultiplier, meta=(AllowPrivateAccess=true))
    float HelpStandMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CrawlHeight, meta=(AllowPrivateAccess=true))
    float CrawlHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CrawlCameraHeight, meta=(AllowPrivateAccess=true))
    float CrawlCameraHeight;
    
    USBZCrawlAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrengthRequiredToStandup(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrengthMaximumRequiredToStandup(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrengthGatherRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HelpStandMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrawlHeight(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrawlCameraHeight(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStrengthRequiredToStandupAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStrengthMaximumRequiredToStandupAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStrengthGatherRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHelpStandMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetCrawlHeightAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetCrawlCameraHeightAttribute();
    
};

