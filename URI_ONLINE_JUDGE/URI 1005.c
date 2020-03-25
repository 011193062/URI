#include<stdio.h>
int main()
{
    float n1,n2,A;
    scanf("%f %f",&n1,&n2);

    A=((n1*3.5)+(n2*7.5))/(3.5+7.5);

    printf("MEDIA = %.5f\n",A);

    return 0;
}

 /*rules of weighted average:



    ( (value1*weight1) + (value2*weight2) ) / (weight1 + weight2)



    */
