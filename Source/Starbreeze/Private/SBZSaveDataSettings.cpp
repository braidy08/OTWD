#include "SBZSaveDataSettings.h"

USBZSaveDataSettings::USBZSaveDataSettings() {
    this->UserValidationFailureWindowTitle = FText::FromString(TEXT("OVERKILL's The Walking Dead encountered an error with your save files"));
    this->UserValidationFailurePrompt1 = FText::FromString(TEXT("The game could not match your user identity to the existing save files. This may have happened if you have save files for a different Steam user, or if Steam was unable to provide the correct user information. Reopening the game may fix this issue.\n\nIf you choose to continue, you may permanently lose save data as the files are overwritten. If you choose not to continue, the game will close and the Starbreeze Crash Reporter will be opened to send additional information about what happened.\n\nWould you like to continue?"));
    this->UserValidationFailurePrompt2 = FText::FromString(TEXT("Are you sure you would like to continue? You may permanently lose saved progress!"));
}


