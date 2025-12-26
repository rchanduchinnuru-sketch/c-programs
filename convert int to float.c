#include <stdio.h>
int main()
{
    int num = 8;
    float result;
    result = (float) num;
    printf("Integer value: %d\n", num);
    printf("After conversion to float: %.2f\n", result);
    return 0;
}
