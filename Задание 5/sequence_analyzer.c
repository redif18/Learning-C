#include <stdio.h>

int main(void)
{
    int n;
    int data[20];
    int sum = 0;
    int min = 0;
    int max = 0;
    int even = 0;
    int inversions = 0;

    /* TODO 1: считать n и проверить 1 <= n <= 20.
       При ошибке вывести input_error и завершить программу. */
    if (scanf("%d", &n) != 1 || n < 1 || n > 20)
    {
        printf("input_error\n");
        return 0;
    }

    /* TODO 2: одним циклом считать data[0] ... data[n - 1].
       Сразу после scanf проверить диапазон -1000 ... 1000.
       Только после проверки обновить sum, min, max и even. */

    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &data[i]) != 1 || data[i] < -1000 || data[i] > 1000)
        {
            printf("input_error\n");
            return 0;
        }

        sum = sum + data[i];

        if (data[i] % 2 == 0)
        {
            even = even + 1;
        }

        if (i == 0)
        {
            min = data[i];
            max = data[i];
        }
        else
        {
            if (data[i] < min)
            {
                min = data[i];
            }
            if (data[i] > max)
            {
                max = data[i];
            }
        }
    }

    /* TODO 3: вложенными циклами проверить каждую пару i < j
       ровно один раз и подсчитать data[i] > data[j]. */
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (data[i] > data[j])
            {
                inversions = inversions + 1;
            }
        }
    }

    /* TODO 4: вывести sum, min, max, even и inversions
       отдельными именованными строками в заданном порядке. */
    printf("sum = %d\n", sum);
    printf("min = %d\n", min);
    printf("max = %d\n", max);
    printf("even = %d\n", even);
    printf("inversions = %d\n", inversions);

    return 0;
}