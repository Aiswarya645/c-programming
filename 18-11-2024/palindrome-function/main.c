#include <stdio.h>

int palindrome(int n)
{
    int i,rem,temp,rev=0;
    
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("the revesre is %d\n",rev);

return rev;
}
int main()
{
    int rev,n;
    printf("enetr the integer:");
    scanf("%d",&n);
    if(n==palindrome(n))
    {
        printf("is palindrome %d",n);
    }
    else
       printf("not palindrome %d",n);
    return 0;
}
