#include <stdio.h>
int main()
{
    float num1, num2, product;
    printf("enter two integers:");
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("product: %2f", product);
    return 0;
}
