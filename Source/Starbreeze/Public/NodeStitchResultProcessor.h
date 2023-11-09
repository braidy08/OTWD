#pragma once
#include "CoreMinimal.h"
#include "PathConnection.h"
#include "PathResultProcessor.h"
#include "NodeStitchResultProcessor.generated.h"

class APathNode;

UCLASS(Blueprintable)
class STARBREEZE_API ANodeStitchResultProcessor : public APathResultProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* FromNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* ToNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforcePathSectionSeparation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathConnection StitchConnection;
    
    ANodeStitchResultProcessor();
};

