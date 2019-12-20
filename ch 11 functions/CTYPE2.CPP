//date 4 oct 2016
//isalum
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
clrscr();
char ch;
cout<<"enter any charachter";
cin>>ch;
if(isalnum(ch))
{if(isalpha(ch))
{if(islower(ch))
{ch=toupper(ch);}
cout<<ch;

{ch=tolower(ch);}
}
else
cout<<"digit";
}
else
cout<<"special charachter";
getch();
}
/*enter any charachter*
special charachter*/



















































