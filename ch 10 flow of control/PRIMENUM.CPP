#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n,i,f;
cout<<"enter any number\n";
cin>>n;
for(i=2;i<=n;i++)
if(n%i==0)
{cout<<"not prime\n";f=0;
break;
}
//cout<<"prime\n";
if(f!=0)
cout<<"prime\n";
getch();
}