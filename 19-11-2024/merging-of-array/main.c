
#include <stdio.h>

int main()
{
    int n,i;
    
    printf("enter the count:");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    int arr3[n*2];
    printf("enter the first array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the second array:");
    for(i=0;i<n;i++)
    {
          scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
      arr3[i]=arr[i];
      arr3[n+i]=arr1[i];
      
    }
    printf("the new array:");
    for(i=0;i<2*n;i++)
    {
    printf("%d",arr3[i]);
    }
   

    return 0;
}