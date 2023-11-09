#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZAttributeSetOverflowBase.h"
#include "OTWDMetaResourceAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDMetaResourceAttributeSet : public USBZAttributeSetOverflowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MetaResource, meta=(AllowPrivateAccess=true))
    float MetaResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MetaResourceMaximum, meta=(AllowPrivateAccess=true))
    float MetaResourceMaximum;
    
    UOTWDMetaResourceAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MetaResourceMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MetaResource(float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetMetaResourceMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetMetaResourceAttribute();
    
};

