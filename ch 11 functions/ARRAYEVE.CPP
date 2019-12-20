//nov 3 2016
//array
#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],s=0,s1=0;
	cout<<"\n\n\t\tEnter Number\n\n\t\t";
	for(int i=0;i<=10;i++)
{	cin>>a[i];
	if(a[i]%2==0)
	s+=a[i];
	else
	s1+=a[i];}
	cout<<s<<s1;
	getch();
}