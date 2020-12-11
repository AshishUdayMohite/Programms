#include<stdio.h>
void main()
{
    int iNo1,iNo2,iNo3=0;
    printf("Enter two numbers:");
    scanf("%d%d",&iNo1,&iNo2);
    iNo3=iNo2;
    iNo2=iNo1;
    iNo1=iNo3;
    printf("Swapping of two numbers are %d and %d",iNo1,iNo2);
    getch();
}
