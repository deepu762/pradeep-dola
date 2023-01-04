#include<stdio.h>

void main()
{
	char c;
	printf("Enter a character\n");
	scanf("%c",&c);
	if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
	switch(c)
	{
	case 'A' :
	case 'E' :
	case 'I' :
	case 'O' :
	case 'U' :
	case 'a' :
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' :
		 {
		 printf("%c is a vowel\n",c);
		 break;
        	 }
	default  :
                 {
                 printf("%c is consonant\n",c);
                 break;
		 }
	 	 }
	else
                 {
                 printf("%c is special character\n",c);
                 }
        
}

