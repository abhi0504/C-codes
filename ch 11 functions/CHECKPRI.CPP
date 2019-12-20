//27 oct 2016
//check prime no.by function
#include<iostream.h>
#include<conio.h>
void checkprime(int  a);
void main()
{	clrscr();
	int n,b;
	cout<<"enter any number";
	cin>>n;
	checkprime(n);
	//cout<<b;
	getch();
}
void checkprime(int  a)
{
	int i,n,b;
	int f=1;
	for(i=2;i<=a/2;i++)
	if(n%i==0)
{	cout<<"not prime";
	break;
}
{	if(f==0)
	cout<<"prime";
}
}