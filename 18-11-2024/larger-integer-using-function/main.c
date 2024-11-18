
#include <stdio.h>
int greatest(int a,int b)
{
    int large;
    if(a>b)
    {
        large=a;
        printf("a is larger %d\n",large);
    }
    else{ 
     large=b;
     printf("b is larger %d\n",large);
    }
     return large;
}
int main()
{
    
    printf(" greatest is:%d\n",greatest(10,45));
    return 0;
}
