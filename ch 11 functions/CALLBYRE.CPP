//call by refrence
#include<iostream.h>
#include<conio.h>
void func(int &a)
{
	cout <<a;
	a = 5;
	cout<<a;
}
void main()
{	int x;
	cin >>x;
	cout<<x;
	func(x);
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAfter calling \n\n\n\n\n\n\n\t\t\t\t\t"<<x;
	getch();
}
//call by value
#include<iostream.h>
#include<conio.h>
void func(int a)
{
	cout <<a;
	a = 5;
	cout<<a;
}
void main()
{	int x;
	cin >>x;
	cout<<x;
	func(x);
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAfter calling \n\n\n\n\n\n\n\t\t\t\t\t"<<x;
	getch();
}

