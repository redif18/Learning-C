#include <stdio.h>

int main(void) {
    /* Вводим изначальные значения */
    int reading_1_tenths = 235;
    int reading_2_tenths = 240;
    int reading_3_tenths = 245;

    /* считаем сумму */
    int sum_tenths = reading_1_tenths + reading_2_tenths + reading_3_tenths;

    /* считаем среднее число */
    float average_tenths = sum_tenths / 3.0F;

    /* переводим в цельсий */
    float average_c = average_tenths / 10.0F;

    /* вывод */
    printf("sum_tenths = %d\n", sum_tenths);
    printf("average_tenths = %.2f\n", average_tenths);
    printf("average_c = %.2f\n", average_c);

    return 0;
}