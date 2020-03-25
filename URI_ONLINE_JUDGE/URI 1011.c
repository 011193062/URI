#include<stdio.h>
#include<math.h>
int main()
{
    double r,v,pie=3.14159;
    scanf("%lf",&r);
    v=(4/3.0)*pie*pow(r,3);
    printf("VOLUME = %.3lf\n",v);
    return 0;
}
