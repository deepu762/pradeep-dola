#include<stdio.h>

void main()
{
	int Subject_1_Marks,Subject_2_Marks,Subject_3_Marks,Subject_4_Marks,Subject_5_Marks,Total_Marks;
	float Percentage_of_Total_Marks;
	printf("Enter 5 Subjects marks \n");
        scanf("%d%d%d%d%d",&Subject_1_Marks,&Subject_2_Marks,&Subject_3_Marks,&Subject_4_Marks,&Subject_5_Marks);
	Total_Marks=Subject_1_Marks+Subject_2_Marks+Subject_3_Marks+Subject_4_Marks+Subject_5_Marks;
	Percentage_of_Total_Marks=(float)Total_Marks/500*100;
	printf("The percentage of the 5 subjects is %0.3f\n",Percentage_of_Total_Marks);
}
