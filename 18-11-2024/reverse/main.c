
#include <stdio.h>

int main()
{
    int n;
    int arr[10];
    printf("enter the count:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    { 
      scanf("%d",&arr[i]);
    }
    printf("the reverse elements is");
    for(int i = n; i>=0 ;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
