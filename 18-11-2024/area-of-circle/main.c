
#include <stdio.h>
#define pi 3.14

float area(int r)
{
    int area;
     area=pi*r*r;
     return area;
}
float main()
{
    printf("area of circle is %f",area(2));

    return 0;
}