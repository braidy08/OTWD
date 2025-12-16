#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZRootSchematic -FallbackName=SBZRootSchematic
#include "OTWDRootSchematic.generated.h"

class UOTWDChallengeSchematic;
class UOTWDMetaSchematic;
class UOTWDMetaTechListSchematic;
class UOTWDQuestDataAssetRoot;

UCLASS(Blueprintable)
class UOTWDRootSchematic : public USBZRootSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetaSchematic* Meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDChallengeSchematic* Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetaTechListSchematic* MetaTechList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDQuestDataAssetRoot* RootQuestData;
    
    UOTWDRootSchematic();

};

