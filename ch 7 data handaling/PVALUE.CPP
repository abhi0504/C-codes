#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int a;
cin>>a;
cout<<"address="<<&a;
int *b=&a;
cout<<"value="<<b;
cout<<"p*="<<*b;
getch();
}