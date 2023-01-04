#include<stdio.h>

struct student
{
        char Name[7];
        char sex;
        int Roll_No;
        int Marks;
}s1[10];
void main()
{
        printf("Enter Student name\n");
        scanf("%s",s1[0].Name);
        printf("Enter Student sex\n");
        scanf("%s",s1[0].sex);
        printf("Enter Student Roll no 1 and Roll no 2\n");
        scanf("%d",&s1[0].Roll_No);
        printf("Enter Student marks\n");
        scanf("%d",&s1[0].Marks);
        printf("Student Roll no is %d\n",s1[0].Roll_No);
        printf("Student Name is %s\n",s1[0].Name);
        printf("Student Marks is %d\n",s1[0].Marks);
        printf("%d\n",sizeof(s1[0].Name));
        printf("%d\n",sizeof(s1[0].sex));
        printf("%d\n%d\n",sizeof(s1[0].Roll_No),sizeof(s1[0].Marks));
        printf("%d\n",sizeof(s1));
}

