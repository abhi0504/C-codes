/*  menu driven of 1.input
			      2.display
			      3.search by rno
			      4.search by name
			      5.exit
*/ 
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct student
    {
	int rno;
	char name[30];
	int marks[3];
	int avg;
    }s[3];
void input()
{
 for(int i=0;i<3;i++)
  {
       cout<<"enter roll no.";
       cin>>s[i].rno;
       cout<<"enter name:";
       gets(s[i].name);
       for(int j=0;j<3;j++)
   {
	  cin>>s[i].marks[j];
	  s[i].avg=(s[i].marks[0]+s[i].marks[1]+s[i].marks[2])/3;
   }
  }
}
void display()
{ 	for(int i=0;i<3;i++)
 {
	cout<<"\nroll no.:"<<s[i].rno;
	cout<<"\nnameof student:";
	puts(s[i].name);
	cout<<"\n\t";
	for(int j=0;j<3;j++)
     {
	   cout<<"\nmarks  in subject"<<j+1<<"="<<s[i].marks[j] ;

     }
	   cout<<"\naverage of"<<i+1<<"="<<s[i].avg;
	   cout<<"\n";
 }

}
void searchbyrno()
{	int b,i,f=0;
	cout<<"enter element to be searched";
	cin>>b;
	for(i=0;i<3;i++)
{
	if(s[i].rno==b)
  {
	f=1;
	break;
  }
}
	if(f==0)
	cout<<"element not found";
	else
{
	cout<<"\nelement found";
}
	cout<<"\nnow enter display details of entered roll number";
	cout<<"\nname=";
	puts(s[i].name);
	cout<<"\nmarks in three subjects";
	 cout<<"\nmarks in subject1"<<s[i].marks[0];
	 cout<<"\nmarks in subject 2"<<s[i].marks[1];
	 cout<<"\nmarks in subject 3"<<s[i].marks[2];
	cout<<"\naverage"<<s[i].avg;
}
	void searchbyname()
{
 // input();
  char ch[10];
  int i,f=0;
  cout<<"enter the name to be searched";
  gets(ch);
   for(i=0;i<3;i++)
    if(strcmp(s[i].name,ch)==0)
    f=1;
}
void main()
{
    clrscr();
    int a;
    int c;
    //char ch='y';
    //while((ch=='y'||ch=='Y'))
do {
	//clrscr();
	cout<<"\t\t\tMAIN MENU\t\t\t";
	cout<<"\n\t\t\t1.input\n\t\t\t2.display\n\t\t\t";
	cout<<"3.search by rno\n\t\t\t4.search by name\n\t\t\t5.exit\n\t\t\t";
	cin>>c;
	switch(c)
  {
   case 1: input();
	  break;
   case 2: display();
	  break;
   case 3:searchbyrno();
	  break;
   case 4:searchbyname();
	  break;
   case 5:exit(0);
	  break;
  }
       //	cout<<"\n"<<"do you want to continue"; cin>>ch;
} while(c!=5);

getch();
}
/*
nameof student:abhishek 
                                                                                
                                                                                
marks  in subject1=100                                                          
marks  in subject2=100                                                          
marks  in subject3=100                                                          
average of1=100

roll no.:15
nameof student:himank


marks  in subject1=10
marks  in subject2=1
marks  in subject3=100
average of2=37

roll no.:1
nameof student:mayank


marks  in subject1=10
marks  in subject2=12
marks  in subject3=56
average of3=26
			MAIN MENU
			1.input
			2.display
			3.search by rno
			4.search by name
			5.exit
			3
enter element to be searched15

element found
now enter display details of entered roll number
name=namit

marks in three subjects
marks in subject110
marks in subject 21
marks in subject 3100
average37                       MAIN MENU
			1.input
			2.display
			3.search by rno
			4.search by name
			5.exit
			5
*/
