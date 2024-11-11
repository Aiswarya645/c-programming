
#include <stdio.h>

int main()
{
    int i,n,d;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        d=i*n;
        printf("%d * %d = %d\n",i,n,i*n);
    }

    return 0;
}
