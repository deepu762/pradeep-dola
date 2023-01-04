/* Write a program to find the frequency of the digits of a given number */

#include<stdio.h>

void main()

{
        int Num,Remiander;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
        printf("Enter a number \n");
        scanf("%d",&Num);
        while(Num>0)
        {
                Remiander=Num%10;
		{
		if(Remiander==0)
		a++;
		else if(Remiander==1)
		b++;
		else if(Remiander==2)
                c++;
                else if(Remiander==3)
                d++;
		else if(Remiander==4)
                e++;
                else if(Remiander==5)
                f++;
                else if(Remiander==6)
		g++;
		else if(Remiander==7)
                h++;
                else if(Remiander==8)
                i++;
                else if(Remiander==9)
		j++;
		}
		Num=Num/10;
        }
        printf("The frequency of 0 is %d\nThe frequency of 1 is %d\nThe frequency of 2 is %d\n",a,b,c);
	printf("The frequency of 3 is %d\nThe frequency of 4 is %d\nThe frequency of 5 is %d\n",d,e,f);
	printf("The frequency of 6 is %d\nThe frequency of 7 is %d\nThe frequency of 8 is %d\n",g,h,i);
        printf("The frequency of 9 is %d\n",j);

}
                                                                                                                                                                                                                  
                                                                                                                                                                                                                  
                                                                                                                                                                                                                  
                                                                                                                                                                                                                  
                                    
