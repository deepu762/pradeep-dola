#include<stdio.h>

struct student
{
	int Roll_No;
	char Name; 
	int Marks;
};
void main()
{
       struct student s={1 , 'P' , 204678};
       printf("Student roll no  is %d \nStudent name is %c\nStudent marks is %d\n",s.Roll_No,s.Name,s.Marks);
}	       

