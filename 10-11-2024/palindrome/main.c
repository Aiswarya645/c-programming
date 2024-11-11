#include <stdio.h>

int main()
{
    int n,rem,temp,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("reverse =%d\n",rev);
    if(n==rev)
    {
        printf("number is palindrome %d",n);
    }
    else
      printf("not palindrome %d",n);

    return 0;
}
