/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int option,balance=1000,deposite,repeat,withdraw,i=0,min[10],limit=5;
    for(;;){
    printf("please select your option \n1 for deposite\n2 for balance enquire\n3 withdraw\n4 for statement\n");
    scanf("%d",&option);
    
    switch(option){
        case 1:
        printf("enter amount :");
        scanf("%d",&deposite);
        printf("deposited %d\n",deposite);
        balance=balance+deposite;
        printf("balance : %d \n",balance);
        min[i]=deposite;
        i++;
        break;
        
        case 2 :
        balance=balance+deposite;
        printf("total balance : %d\n",balance);
        break;
        
        case 3 :
        printf("enter amount : ");
        scanf("%d",&withdraw);
        printf("withdrawed :%d\n",withdraw);
        balance=balance-withdraw;
        printf("balance :%d\n",balance);
        min[i]=(withdraw*-1);
        i++;
        break;
        
        case 4 :
        for(i=0;i<5;i++){
            printf("%d\n",min[i]);
        }
    }
    
    
    printf("do you want to continue \n 1 for yes \n 2 for no\n");
    scanf("%d",&repeat);
    if(repeat==2){
        break;
    }
    }
    return 0;

}