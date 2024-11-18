
#include <stdio.h>

float intrest(float p,float r,float t)
{
    float intre;
     intre=(p*r*t)/100;

    return intre;
}
int main()
{
    printf("the interst rate is %f",intrest(10000,12,1));
    return 0;
}
