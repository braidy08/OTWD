#include "SBZSpawnManagerFunctionLibrary.h"

USBZSpawnManagerFunctionLibrary::USBZSpawnManagerFunctionLibrary() {
}

void USBZSpawnManagerFunctionLibrary::WaitForRequestGroup(const UObject* WorldContextObject, FSBZRequestGroupHandle Handle, FLatentActionInfo LatentInfo) {
}

TArray<APawn*> USBZSpawnManagerFunctionLibrary::RequestPawnTypesImmediately(const UObject* WorldContextObject, const TArray<FSBZPawnTypeRequest>& Requests, FSBZRequestGroupOptions Options, FName DebugName) {
    return TArray<APawn*>();
}

FSBZRequestGroupHandle USBZSpawnManagerFunctionLibrary::RequestPawnTypes(const UObject* WorldContextObject, const TArray<FSBZPawnTypeRequest>& Requests, const FPawnDynamicDelegate& PawnSpawned, const FRequestDynamicDelegate& RequestStopped, FSBZRequestGroupOptions Options, FName DebugName) {
    return FSBZRequestGroupHandle{};
}

ESBZRequestGroupStatus USBZSpawnManagerFunctionLibrary::GetStatus(const FSBZRequestGroupHandle& Handle) {
    return ESBZRequestGroupStatus::Pending;
}

int32 USBZSpawnManagerFunctionLibrary::GetRequestCount(const FSBZRequestGroupHandle& Handle) {
    return 0;
}

FSBZPawnTypeRequest USBZSpawnManagerFunctionLibrary::GetRequest(const FSBZRequestGroupHandle& Handle, int32 Index) {
    return FSBZPawnTypeRequest{};
}

TArray<APawn*> USBZSpawnManagerFunctionLibrary::GetCreatedPawns(const FSBZRequestGroupHandle& Handle, bool bIncludeMissingPawns) {
    return TArray<APawn*>();
}

void USBZSpawnManagerFunctionLibrary::CancelRequestGroup(const FSBZRequestGroupHandle& Handle) {
}


