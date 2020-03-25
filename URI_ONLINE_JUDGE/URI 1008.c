#include<stdio.h>
int main()
{
    int n;
    float work_hour,salary;
    scanf("%d",&n);
    scanf("%f",&work_hour);
    scanf("%f",&salary);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",n,work_hour*salary);

    return 0;

}

