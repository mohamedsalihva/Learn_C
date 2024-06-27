/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],i;
    printf("enterd array values");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("entered values ");
    
 for(i=0;i<5;i++){
         printf(" %d",a[i]);
    }
   
    return 0;
}
