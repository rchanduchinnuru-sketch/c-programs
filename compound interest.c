#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    float amount,compoundInterest;
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest:");
    scanf("%f",&rate);
    printf("enter time (in years):");
    scanf("%f",&time);
    amount=principal*pow((1+rate/100),time);
    compoundInterest=amount-principal;
    printf("compound interest:%2f",compoundInterest);
    return 0;
}
