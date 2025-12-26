#include <stdio.h>
int main()
{
    float num = 12.89;
    int result = (int) num;
    printf("Original float value: %.2f\n", num);
    printf("After type casting: %d\n", result);
    return 0;
}
