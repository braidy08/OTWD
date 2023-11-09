#include "SBZHealthChunkAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZHealthChunkAttributeSet::OnRep_ChunkSize(float OldValue) {
}

FGameplayAttribute USBZHealthChunkAttributeSet::GetChunkSizeAttribute() {
    return FGameplayAttribute{};
}

void USBZHealthChunkAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZHealthChunkAttributeSet, ChunkSize);
}

USBZHealthChunkAttributeSet::USBZHealthChunkAttributeSet() {
    this->ChunkSize = 1;
}

