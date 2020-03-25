#include<stdio.h>
int main()
{
    int code1,quantity1,code2,quantity2;
    float price1,price2,total_expense;
    scanf("%d %d %f",&code1,&quantity1,&price1);

    scanf("%d %d %f",&code2,&quantity2,&price2);
    total_expense=(quantity1*price1)+(quantity2*price2);
    printf("VALOR A PAGAR: R$ %.2f\n",total_expense);
    return 0;

}
