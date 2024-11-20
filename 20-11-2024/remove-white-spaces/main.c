/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[]="nano chem";
    int i,j=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    printf("%s",str);

    return 0;
}
