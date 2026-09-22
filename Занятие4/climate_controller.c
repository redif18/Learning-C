#include <stdio.h>

int main(void)
{
    /* значения температур крайностей*/
    const int AUTO_MEDIUM_MIN_C = 25;
    const int AUTO_HIGH_MIN_C = 30;
    const int MANUAL_LEVEL_MIN = 0;
    const int MANUAL_LEVEL_MAX = 2;

    int sensor_ok, mode, temperature_c, manual_level;
    int fan_level = 0;
    int status_code = 0;

    if (scanf("%d %d %d %d", &sensor_ok, &mode, &temperature_c, &manual_level) != 4)
    {
        return 1;
    }

    /* TODO 1: проверка исправности датчика */
    if (sensor_ok != 1)
    {
        fan_level = 0;
        status_code = 0;
    }
    else /* TODO 2: выбор режима через switch */
    {
        switch (mode)
        {
        case 0:
            fan_level = 0;
            status_code = 1;
            break;

        case 1:
            if (temperature_c < AUTO_MEDIUM_MIN_C)
            {
                fan_level = 0;
                status_code = 2;
            }
            else if (temperature_c < AUTO_HIGH_MIN_C)
            {
                fan_level = 1;
                status_code = 3;
            }
            else
            {
                fan_level = 2;
                status_code = 4;
            }
            break;

        case 2:
        /* не меньше 0 и не больше 2 */
            if (manual_level >= MANUAL_LEVEL_MIN && manual_level <= MANUAL_LEVEL_MAX)
            {
                fan_level = manual_level;
                status_code = 5;
            }
            else
            {
                fan_level = 0;
                 status_code = 6;
            }

            break;

        default:
            fan_level = 0;
            status_code = 7;

            break;
        }
    }
    /* TODO 3: вложенные условия для mode 1 и mode 2 */

    printf("fan_level=%d status_code=%d\n", fan_level, status_code);
    return 0;
}