#pragma once

#define MAG_VERSION_APP "0.03"
#define MAG_DEVELOPER "Zachary Weiss"
#define MAG_GITHUB "github.com/zacharyweiss/magspoof_flipper"

typedef enum {
    MagViewSubmenu,
    MagViewDialogEx,
    MagViewPopup,
    MagViewLoading,
    MagViewWidget,
    MagViewVariableItemList,
    MagViewTextInput,
    MagViewMagTextInput,
} MagView;

typedef enum {
    MagReverseStateOn,
    MagReverseStateOff,
} MagReverseState;

typedef enum {
    MagTrackStateAll,
    MagTrackStateOne,
    MagTrackStateTwo,
} MagTrackState;

typedef enum {
    MagTxStateRFID,
    MagTxStateGPIO,
    MagTxStatePiezo,
    MagTxStateLF_P, // combo of RFID and Piezo
    MagTxCC1101_434,
    MagTxCC1101_868,
} MagTxState;
