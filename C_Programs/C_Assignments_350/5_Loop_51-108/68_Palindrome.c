#include<stdio.h>

void main()

{
        int Num1,Num,Remiander,Reverse=0;
        printf("Enter a number \n");
        scanf("%d",&Num);
        Num1=Num;
        while((Remiander=Num%10)>0)
        {
                Reverse=Reverse*10+Remiander;
                Num=Num/10;
        }
	if(Num1==Reverse)
        	printf("Number %d is a palindrome \n",Num1);
	
	else
		printf("Number %d is not a palindrome \n",Num1);
}
                                                                                                                                                                                                                  
                                                                                                                                                                                                                  
                                                                                                                                                                                                                  
                                                                                                                                                                                                                  
                                   
