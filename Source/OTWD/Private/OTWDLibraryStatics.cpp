#include "OTWDLibraryStatics.h"

void UOTWDLibraryStatics::UnlockLibraryItem(const UObject* WorldContextObject, UOTWDLibraryItemData* ItemToUnlock) {
}

void UOTWDLibraryStatics::MarkLibraryItemsAsRead(const UObject* WorldContextObject, UOTWDLibraryItemData* NewlyReadLibraryItem) {
}

bool UOTWDLibraryStatics::IsLibraryItemUnread(const UObject* WorldContextObject, UOTWDLibraryItemData* LibraryDataItem) {
    return false;
}

bool UOTWDLibraryStatics::IsLibraryItemUnlocked(const UObject* WorldContextObject, UOTWDLibraryItemData* LibraryDataItem) {
    return false;
}

float UOTWDLibraryStatics::GetChunkInstallProgress(int32 ChunkId) {
    return 0.0f;
}

bool UOTWDLibraryStatics::DoUnreadLibraryItemsExist(const UObject* WorldContextObject) {
    return false;
}

UOTWDLibraryStatics::UOTWDLibraryStatics() {
}

