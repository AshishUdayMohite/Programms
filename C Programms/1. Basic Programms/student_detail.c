#include<stdio.h>
void main()
{
    int no;
    char name[10],course[5],city[5];
    printf("====================Enter_Student_Information==============================\n");
    printf("\tName:");
    scanf("%s",&name);
    printf("\tRoll no:");
    scanf("%d",&no);
    printf("\tCourse:");
    scanf("%s",&course);
    printf("\tCity:");
    scanf("%s",&city);
    printf("====================Entered_Student_Information==============================\n");
    printf("\tName of Student is:%s\n \tRoll no of Student is:%d\n \tCourse is:%s\n \tCity is:%s\n ",name,no,course,city);
    getch();
}
