#include<stdio.h>

void main()
{
	float Subject_1,Subject_2,Subject_3,Subject_4,Subject_5,Total_Marks,Average_Marks,Total_Percentage;
	printf("Enter 5 subject marks:\n");
	scanf("%f%f%f%f%f",&Subject_1,&Subject_2,&Subject_3,&Subject_4,&Subject_5);
	Total_Marks=(Subject_1+Subject_2+Subject_3+Subject_4+Subject_5);
	Average_Marks=Total_Marks/5;
	Total_Percentage=Total_Marks/500*100;
	printf("The Total marks is %0.3f\n",Total_Marks);
	printf("The Average marks is %0.3f\n",Average_Marks);
	printf("The percentage is %0.3f\n",Total_Percentage);
}

