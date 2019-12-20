//uppercase
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str[20];
	cout<<"\n\n\t\tEnter any string\t\t\n\n";
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	if(islower(str[i]))
	str[i]=toupper(str[i]);
	cout<<"\n\n\t\tuppercase\n\n\t\t\n\t"<<str;
	getch();
}