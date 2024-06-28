/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5],i,sum=0,limit;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the value");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("result %d",sum);

    return 0;
}