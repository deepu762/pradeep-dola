#include<stdio.h>

void main()
{
	float Basic_Salary,Gross_Salary,HRA,DA;
	printf("Enter Basic Salary of an Employee\n");
	scanf("%f",&Basic_Salary);
	if(Basic_Salary<=10000)
	{
		HRA=0.20*Basic_Salary;
		DA=0.80*Basic_Salary;
	}
	else if(Basic_Salary<=20000)
	{
		HRA=0.25*Basic_Salary;
                DA=0.90*Basic_Salary;
	}
	else 
        {       
                HRA=0.30*Basic_Salary;
                DA=0.95*Basic_Salary;
	}
	Gross_Salary=Basic_Salary+HRA+DA;
	printf("Gross salary of the employee is %0.3f\n",Gross_Salary);
}
