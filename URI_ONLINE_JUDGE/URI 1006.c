#include<stdio.h>
int main()
{

    float n1,n2,n3,A;

    scanf("%f %f %f",&n1,&n2,&n3);

    A=((n1*2)+(n2*3)+(n3*5))/(2+3+5);

    printf("MEDIA = %.1f\n",A);

    return 0;



}
    /*rules of weighted average:



    ( (value1*weight1) + (value2*weight2) + (value2*weight2) ) / (weight1 + weight2 + weight3)



    */











/*

you can also do it this way:

    float n1,n2,n3,A;

    scanf("%f %f %f",&n1,&n2,&n3);

    A=(n1/10*2)+(n2/10*3)+(n3/10*5);

    printf("MEDIA = %.1f\n",A);

*/
