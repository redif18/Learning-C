#include <stdio.h>

int main(void)
{
    /* TODO 1: постоянный период, с */
    /* TODO 2: изменяемое количество измерений */
    /* TODO 3: общая длительность, с */
    /* TODO 4: общая длительность, мин */
    const int period_ms = 250;
    int impulses = 100;
    int total_seconds = period_ms * impulses / 1000.0F;
    /* float total_seconds = total_mseconds / 60.0F; */
    float total_minutes = total_seconds / 60.0F;
    printf("Длительность: %d с\n", total_seconds);
    printf("Длительность: %.1f мин\n", total_minutes);

    return 0;
}