//16-12-2016
//chh-13 ques10
#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct data
{char name[20];
char capital[20];
float income;
} c[5]={{"INDIA","delhi",30000},
	   {"U.S.A","washington d.c.",40000},
	   {"BRITAIN","london",30000},
	   {"RUSSIA","moscow",15000},
	   {"CHINA","tibet",20000}};
void main()
{clrscr();
int ch;
char country2[20],capital2[20];
do
{cout<<"menu \n 1.enter country name \n 2.enter capital name\n 3.exit\n ";
cout<<"enter choice";
cin>>ch;
switch(ch)
{case 1:cout<<"enter the country name";
	gets(country2);
	for(int i=0;i<5;i++)
	{if(strcmpi( c[i].name,country2)==0)
	{puts( c[i].name);
	puts(c[i].capital);
	cout<<"income"<<c[i].income;
	}
}
	break;
case 2:cout<<"enter capital";
       gets(capital2);
       for(i=0;i<0;i++)
       {if(strcmpi(c[i].capital,capital2)==0)
       {puts(c[i].name);
	puts(c[i].capital);
       cout<<"income"<<c[i].income;
       }}break;
case 3:exit(0);
}}while(1);
getch();
}
/*output is
menu
 1.enter country name                                                           
 2.enter capital name                                                           
 3.exit                                                                         
 enter choice1                                                                  
enter the country nameindia                                                     
INDIA                                                                           
delhi                                                                           
income30000menu                                                                 
 1.enter country name                                                           
 2.enter capital name                                                           
 3.exit                                                                         
 enter choice3*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
