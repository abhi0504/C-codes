//arithmatic expression
//17 august 2016
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char ch;
int a,b,r;
cout<<"enter two integers";
cin>>a>>b;
cout<<"enter any operator";
cin>>ch;
if(ch=='+')
r=a+b;
else if(ch=='-')
r=a-b;
cout<<r;
getch();
}
