#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZCharactersSchematic.generated.h"

class APawn;
class USBZCharacterSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCharactersSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* DefaultCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCharacterSchematic*> Characters;
    
    USBZCharactersSchematic();
    UFUNCTION(BlueprintCallable)
    USBZCharacterSchematic* FindSchematicForClass(TSoftClassPtr<APawn> PawnClass);
    
};

