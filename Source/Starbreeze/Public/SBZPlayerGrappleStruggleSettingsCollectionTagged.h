#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleStruggleSettingsCollection.h"
#include "SBZPlayerGrappleStruggleSettingsCollectionTagged.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleStruggleSettingsCollectionTagged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EnemyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleStruggleSettingsCollection Settings;
    
    FSBZPlayerGrappleStruggleSettingsCollectionTagged();
};

