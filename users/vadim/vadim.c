#include "vadim.h"

void france(void)
{
    int i = 0;
    for (; i < 5; i++)
    {
        rgblight_setrgb_at(0, 0, 255, i);
    }

    for (; i < 10; i++)
    {
        rgblight_setrgb_at(255, 255, 255, i);
    }

    for (; i < 15; i++)
    {
        rgblight_setrgb_at(255, 0, 0, i);
    }
}