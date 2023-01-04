#include<stdio.h>

void main()
{
	char c ;
	printf("Enter any character:\n");
	scanf("%c",&c);
	   if(((c>='A')&&(c<='Z'))||((c>='a') && (c<='z')))
	  	 {
		   printf("%c is alphabet\n",c);
		 }
	   else if((c>='0')&&(c<='9'))
	   	 {
		   printf("%c is a digit\n",c);
		 }
	   else
		 {
		 printf("%c is a special character\n",c);
		 }  
}	    
