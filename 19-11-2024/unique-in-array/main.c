#include <stdio.h>
int main()
{
	int n,i,count,j;
	printf("enter the count:");
	scanf("%d",&n);
	int arr[n];
	printf("the elements are:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the unique element:");
	for(i=0; i<n; i++)
	{
		count=0;
		for(j=0; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}

		if(count==1)
		{
			printf("%d",arr[i]);
		}
	}
}
