#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPOnDialogEnded_DelegateDelegate.h"
#include "ESBZPlayDialogResult.h"
#include "SBZActiveDialogData.h"
#include "Templates/SubclassOf.h"
#include "SBZDialogManager.generated.h"

class AActor;
class ASBZAISmallTalk;
class ASBZNarrator;
class UAkAudioEvent;
class USBZDialogData;
class USBZDialogManager;

UCLASS(Blueprintable, DefaultToInstanced)
class STARBREEZE_API USBZDialogManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogData*> Dialogs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAISmallTalk> AISmallTalkClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZNarrator* Narrator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZActiveDialogData> ActiveDialogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAISmallTalk* AISmallTalk;
    
public:
    USBZDialogManager();

    UFUNCTION(BlueprintCallable)
    void PlayLine(AActor* Performer, UAkAudioEvent* AudioEvent, const FString& CommentState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ESBZPlayDialogResult PlayDialogByName(FName DialogID, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayDialogByName(FName DialogID, const TArray<AActor*>& Performers, AActor* DialogInstigator);
    
    UFUNCTION(BlueprintCallable)
    ASBZNarrator* GetNarrator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZDialogManager* GetDialogManager(UObject* WorldContextObject);
    
};

