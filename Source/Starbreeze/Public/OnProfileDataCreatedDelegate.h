#pragma once
#include "CoreMinimal.h"
#include "SBZNetStruct.h"
#include "OnProfileDataCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProfileDataCreated, const FSBZNetStruct&, ProfileDataPackage);

