// Menu Driven stack
// Date oct 9 2017
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
 class stack
  {
    int top;
    int a[5];
  public:
    stack()
      {
       top=-1;
      }
 void push(int n)
      {
       if(top==4)
        {
          cout<<"\noverflow\n";
                 return;
        }
         a[++top]=n;
         cout<<"\nvalue inserted\n";
      }
 void pop()
   {
     if(top==-1)
      {
       cout<<"\nnunderflow\n";
       return;
      }
   cout<<"\nElement deleted\n"<<a[top--];
   }
 void display()
  {
    if(top==-1)
      {
       cout<<"\nunderflow";
       return;
      }
   for(int i=top;i>=0;i--)
   cout<<a[i]<<"\n";
  }
 };
 void main()
  {
   clrscr();
   char ch;
   int n,m,choice;
   stack s;
   cout<<"\n********************************************************************************";
   cout<<"\t\t\t\tMENU DRIVEN CODE";
   cout<<"\n********************************************************************************";
   cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
   do
    {
    cout<<"\nEnter your choice\t";
    cin>>choice;
    switch(choice)
    {
    case 1:cout<<"\nenter data\n";
           cin>>n;
           s.push(n);
           break;
    case 2:s.pop();
           break;
    case 3:s.display();
           break;
    case 4:exit(0);
    default:cout<<"\nwrong choice\n";
    }
    cout<<"\nDo you want to continue\n";
    cin>>ch;
    //clrscr();
    }
    while((ch=='y')||(ch=='Y'));
    getch();
  }