#include "global.h"
#include "rtc.h"
#include "config/overworld.h"
#include "constants/rtc.h"
#include "battle_bg.h"

// Returns the appropriate battle environment palette based on the time of day
const u16* GetTimeBasedPalette(const u16* defaultPalette, const u16* nightPalette, const u16* morningPalette)
{
    enum TimeOfDay timeOfDay = GetTimeOfDay();
    
    switch (timeOfDay)
    {
    case TIME_MORNING:
        return morningPalette ? morningPalette : defaultPalette;
    case TIME_NIGHT:
        return nightPalette ? nightPalette : defaultPalette;
    default: // TIME_DAY, TIME_EVENING
        return defaultPalette;
    }
}