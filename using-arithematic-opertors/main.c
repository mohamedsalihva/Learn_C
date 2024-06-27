/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,choise,result; 
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("1 for + \n 2 for _ \n 3 for * \n 4 for / \n plese enter choise");
   scanf("%d",&choise);
   
   if(choise == 1){
      result=a+b;
   }else if(choise == 2){
         result=a-b;
   }else if(choise == 3){
         result=a*b;
   }else if(choise == 4){
         result=a/b;
   }else{
       printf("fool");
   }
   printf(" result is %d",result);

    return 0;
}
