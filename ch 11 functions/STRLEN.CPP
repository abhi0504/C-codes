//14 oct 2016
//ch 11 Flow Of Control
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char str[10];
cout<<"\n\n\n\n\t\t\t\tEnter Any String";
cin.getline(str,10);
int i=strlen(str);
cout<<"\t\t\t\t\t\nLength Of Entered String"<<i;
getch();
}