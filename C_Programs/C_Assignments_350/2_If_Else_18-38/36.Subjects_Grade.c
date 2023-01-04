#include<stdio.h>

void main()
{
	int Physics_Marks,Chemsitry_Marks,Biology_Marks,Mathematics_Marks,Computer_Marks,Max_Marks;
	float Total,Percentage;
	printf("Enter Physics_Marks,Chemsitry_Marks,Biology_Marks,Mathematics_Marks,Computer_Marks,Max_Marks\n");
	scanf("%d%d%d%d%d%d",&Physics_Marks,&Chemsitry_Marks,&Biology_Marks,&Mathematics_Marks,&Computer_Marks,&Max_Marks);
	Total=Physics_Marks+Chemsitry_Marks+Biology_Marks+Mathematics_Marks+Computer_Marks;
	Percentage=((Total/(5*Max_Marks))*100);
	if(Percentage>=90)
	{
		printf("The percentage obtained is %0.2f and GRADE=A\n",Percentage);
	}
	else if(Percentage>=80)
        {
                printf("The percentage obtained is %0.2f and GRADE=B\n",Percentage);
        }
	else if(Percentage>=70)
	{
                printf("The percentage obtained is %0.2f and GRADE=C\n",Percentage);
        }
	else if(Percentage>=60)
	{
	        printf("The percentage obtained is %0.2f and GRADE=D\n",Percentage);
        }
	else if(Percentage>=40)
	{
                printf("The percentage obtained is %0.2f and GRADE=E\n",Percentage);
        }
	else 
	{
                printf("The percentage obtained is %0.2f and GRADE=F\n",Percentage);
        }
}




