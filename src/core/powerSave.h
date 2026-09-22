#ifndef BRUCE_SRC_CORE_POWERSAVE_H
#define BRUCE_SRC_CORE_POWERSAVE_H

#include "display.h"
#include <globals.h>

void checkPowerSaveTime();

void sleepModeOn();

void sleepModeOff();

void fadeOutScreen(int startValue);

#endif // BRUCE_SRC_CORE_POWERSAVE_H
