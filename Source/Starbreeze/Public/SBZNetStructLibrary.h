#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZNetStruct.h"
#include "SBZNetStubStruct.h"
#include "SBZNetStructLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNetStructLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZNetStructLibrary();
    UFUNCTION(BlueprintCallable)
    static bool WriteStruct(UPARAM(Ref) FSBZNetStruct& InNetStruct, const FSBZNetStubStruct& InStruct);
    
    UFUNCTION(BlueprintCallable)
    static void SetIdentifier(UPARAM(Ref) FSBZNetStruct& InNetStruct, uint8 InIdentifier);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadStruct(UPARAM(Ref) FSBZNetStruct& InNetStruct, FSBZNetStubStruct& OutStruct);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValid(UPARAM(Ref) FSBZNetStruct& InNetStruct);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetIdentifier(UPARAM(Ref) FSBZNetStruct& InNetStruct);
    
};

