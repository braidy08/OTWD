#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZHealthChunkAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZHealthChunkAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChunkSize, meta=(AllowPrivateAccess=true))
    float ChunkSize;
    
    USBZHealthChunkAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChunkSize(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetChunkSizeAttribute();
    
};

