/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
  
    for(i = 2; i < limit; i++) {
        if(i % 2 == 0) {
            printf(" %d\n", i);
        }
    }

    return 0;
}
