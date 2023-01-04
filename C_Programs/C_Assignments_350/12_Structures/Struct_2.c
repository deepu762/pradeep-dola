#include<stdio.h>

struct student
{
       	int Roll_No;      
	char Name;	
        int Marks;
};
void main()
{
       	struct student s;
	printf("Enter Student Roll no\n");
        scanf("%d",&s.Roll_No);
	printf("Enter Student name\n");
        scanf("%c",&s.Name);
	printf("Enter Student marks\n");
        scanf("%d",&s.Marks);
	printf("Student Roll no is %d\n",s.Roll_No);
  	printf("Student Name is %c\n",s.Name);
	printf("Student Marks is %d\n",s.Marks);
}             
