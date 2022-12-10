#include<stdlib.h>
#include"math.h"
#include<stdio.h>
int main()
{
int op,n1,n2;
float res;
//char c;
do{
    
    printf("------------------------------------------\n");
    printf("**********THE OPERATION ARE***************\n");
    printf("------------------------------------------\n");
    printf("\n 1:Addition");
    printf("\n 2:Subtraction");
    printf("\n 3:Multiplicaton");
    printf("\n 4:Division");
    printf("\n 5:Square");
    printf("\n 6:Square Roots");
    printf("\n 7:EXIT");
    printf("\nSelect Your operation You want to perform: ");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
    printf("PLEASE ENTER YOUR TWO NO: ");
    scanf("%d %d",&n1,&n2);
    res=n1+n2;
    printf("\nSUM of %d and %d is %f",n1,n2,res);
    break;
    case 2:
    printf("PLEASE ENTER YOUR TWO NO: ");
    scanf("%d %d",&n1,&n2);
    res=n1-n2;
    printf("\nSUBTRACTION of %d and %d is %f",n1,n2,res);
    break;
    case 3:
    printf("PLEASE ENTER YOUR TWO NO: ");
    scanf("%d %d",&n1,&n2);
    res=n1*n2;
    printf("\nMULTIPLICATION of %d and %d is %.2f",n1,n2,res);
    break;
    case 4:
    printf("PLEASE ENTER YOUR TWO NO: ");
    scanf("%d %d",&n1,&n2);
    if(n2==0)
    {
        printf("undeterminant form");
        break;
    }
    else{
    res=n1/n2;
    printf("\nDIVISION of %d and %d is %.2f",n1,n2,res);
    }
    break; 
    case 5:
    printf("PLEASE ENTER YOUR NO: ");
    scanf("%d",&n1);
    res=n1*n1;
    printf("\nSQUARE of %d is %.2f",n1,res);
    break;
    case 6:
    printf("PLEASE ENTER YOUR NO: ");
    scanf("%d ",&n1);
    res=sqrt(n1);
    printf("\nSQUARE_ROOT of %d is %f.2",n1,res);
    break;
    case 7:
    printf("YOU SELECT EXIT...");
    exit(0);
    break;
    default:
    printf("PLEASE SELECT RIGHT OPTION:");
    break;
    }
}while(op!=7);
return 0;
}