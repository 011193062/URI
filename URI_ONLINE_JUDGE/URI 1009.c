#include<stdio.h>

int main()
{
    char name[50];

    double fixed_salary,total_sale,total_salary;


    scanf("%s",&name);//gets(name) cannot be used


    scanf("%lf %lf",&fixed_salary,&total_sale);



    total_salary=fixed_salary+(0.15*total_sale);// 15% = 15/100 = 0.15



    printf("TOTAL = R$ %.2lf\n",total_salary);

   return 0;
}
