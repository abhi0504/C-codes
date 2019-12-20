//2d array menu driven
//date 30 march 2017
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[20][20],b[20][20],c[20][20];
//function prototype
void sumofuptri();
void sumoflowtri();
void sumofdiagelements();
void main();
{
	 clrscr();
	int choice;
	do{
		cout<<"\n\n--------Menu-----------\n";
		cout<<"1.sum of upper triangle\n";
		cout<<"2.sum of lower triangle\n";
		cout<<"3.sum of diagonal elements\n";
		cout<<"4.Exit\n";
		cout<<"-----------------------)";
		cout<<"\nEnter your choice:\t";
		cin>>choice;
		switch(choice)
		{
			case 1:         sumofuptri();
					break;
			case 2:
					sumoflowtri();
					break;
			case 3:
					sumofdiagelements();
					break;
			case 4:
					exit(0);
					break;
			default:
					cout<<"\nInvalid choice:\n";
					break;
		}
	}while(choice!=4);
return 0;
}
void sumofdiagelements()  //displaying sum of primary and secondary diagonal
{  int a[10][10],r,c,i,j,s1=0,s2=0;
  cout<<"enter no. of rows and columns\n\t";
 cin>>r>>c;
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 {
  cout<<"enter element";
  cin>>a[i][j];
 }
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 if(i==j)
 {s1=s1+a[i][j];}
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 if(i+j==r-1)
 {s2=s2+a[i][j];}
 for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
  cout<<a[i][j]<<" ";
 cout<<"\n";
}
cout<<"sum of p diagonal\t"<<s1;
cout<<"\n"<<"sum of sec diagonal\t"<<s2;
}
void sumofuptri()
{