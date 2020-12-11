#include<stdio.h>
void main()
{
    int iNo1=0,iNo2=0;
    printf("======================================\n");
    printf("\tEnter two values :\n");
    scanf("%d%d",&iNo1,&iNo2);
    add(iNo1,iNo2);
    sub(iNo1,iNo2);
    mul(iNo1,iNo2);
    div(iNo1,iNo2);
    printf("======================================");
    getch();
}
void add(int a,int b)
{
    printf("\taddition of two numbers are:%d\n",a+b);
}
void sub(int a,int b)
{
    printf("\tSubs of two numbers are:%d\n",a-b);
}
void mul(int a,int b)
{
    printf("\tMulti of two numbers are:%d\n",a*b);
}
void div(int a,int b)
{
    printf("\tDiv of two numbers are:%f\n",(float)a/b);
}
