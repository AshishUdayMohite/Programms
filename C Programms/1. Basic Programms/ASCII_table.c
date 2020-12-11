#include<stdio.h>
void main()
{
    int i;
    printf("ASCII Table\n");
    for(i=0;i<=127;i++)
    {
        printf("%c:%d",i,i);
    }
    getch();
}

