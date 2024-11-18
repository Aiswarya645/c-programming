/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,highest;
    int arr[6];
    printf("enter the count:");
    scanf("%d",&n);
    printf("enter the elemnts:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    highest=arr[0];
    for(i=0;i<n;i++)
    {
        if(highest<arr[i])
        highest=arr[i];
    }
    printf("elements is %d ",highest);

    return 0;
}