#include <stdio.h>

int main(void)
{
    /* Входные данные. В тестах A-F меняются только эти 4 значения. */
    float temperature_1_c = 16.0F;
    float temperature_2_c = 18.0F;
    int humidity_percent = 25;
    int sensor_valid = 1;

    /* Константы требования. Их во время тестирования не менять. */
    const float MIN_TEMPERATURE_C = 18.0F;
    const float MAX_TEMPERATURE_C = 28.0F;
    const int MIN_HUMIDITY_PERCENT = 30;
    const int MAX_HUMIDITY_PERCENT = 70;

    const int SENSOR_VALID_WEIGHT = 20;
    const int TEMPERATURE_WEIGHT = 40;
    const int HUMIDITY_WEIGHT = 40;

    /* Вычисляемые результаты. Замените заглушки на выражения. */
    float average_temperature_c = (temperature_1_c + temperature_2_c) / 2.0F
        ;  /* TODO 1 */
    int temperature_ok = 
    (average_temperature_c >= MIN_TEMPERATURE_C) && 
    (average_temperature_c <= MAX_TEMPERATURE_C);            /* TODO 2 */
    int humidity_ok = 
    (humidity_percent >= MIN_HUMIDITY_PERCENT) && 
    (humidity_percent <= MAX_HUMIDITY_PERCENT);              /* TODO 3 */
    int data_ready = sensor_valid && temperature_ok && humidity_ok;
                       /* TODO 4 */
    int quality_score = 
    sensor_valid * 
    (SENSOR_VALID_WEIGHT
     + temperature_ok * TEMPERATURE_WEIGHT
     + humidity_ok * HUMIDITY_WEIGHT);                       /* TODO 5 */

    printf("average_temperature_c = %.1f\n", average_temperature_c);
    printf("temperature_ok = %d\n", temperature_ok);
    printf("humidity_ok = %d\n", humidity_ok);
    printf("data_ready = %d\n", data_ready);
    printf("quality_score = %d\n", quality_score);

    return 0;
}