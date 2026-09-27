#include <stdio.h>

int main(void)
{
    int lol = 0;
    if (scanf("%d", &lol) != 1)
    {
        printf("input_error\n");
        return 0;
    }
    
    printf("hz = %d\n", lol);
    return 0;
}