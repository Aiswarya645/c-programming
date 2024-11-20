
#include <stdio.h>
#include<string.h>

int main()
{
    char str[]="malayalam";
    
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[strlen(str)-1-i])
        {
            printf("is not palindrome");
            return 0;
        }
    }
    printf("is palindrome");
    return 0;
}
