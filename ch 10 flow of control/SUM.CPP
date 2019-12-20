//sum of given odd and even no.s
#include<iostream.h>
#include<conio.h>
void main()
{char ch;  clrscr();
int no,se=0,so=0,c=0;
do
{cout<<"enter any no.";
cin>>no;
if(no%2==0)
se=se+no;
c=c+1;
cout<<"want to enter any no";
cin>>ch;
}
while((ch=='Y')||(ch=='y'));
cout<<se<<so<<c;
getch();
}

