// Menu Driven queue
// Date oct 11 2017
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
 class queue
  {
    int top,fr,rr;
    int a[5];
  public:
    queue()
      {
       fr=rr=-1;
      }
 void Insert(int n)
      {
       if(top==4)
        {
          cout<<"\noverflow\n";
                 return;
        }
         a[++rr]=n;
         cout<<"\nvalue inserted\n";
         if(fr==-1)
          fr=0;
        }
 void Delete()
   {
     if(fr==-1)
      {
       cout<<"\nnunderflow\n";
       return;
      }
     int d=a[fr];
     if(fr==rr)
     fr=rr-1;
     else
     fr++;
  cout<<"\nElement deleted\n"<<d;
   }
 void display()
  {
    if(fr==-1)
      {
       cout<<"\nunderflow";
       return;
      }
   for(int i=fr;i>=rr;i--)
   cout<<a[i]<<"\n";
  }
 };
 void main()
  {
   clrscr();
   char ch;
   int n,m,choice;
   queue s;
   cout<<"\n********************************************************************************";
   cout<<"\t\t\t\tMENU DRIVEN CODE";
   cout<<"\n********************************************************************************";
   cout<<"\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n";
   do
    {
    cout<<"\nEnter your choice\t";
    cin>>choice;
    switch(choice)
    {
    case 1:cout<<"\nenter data\n";
           cin>>n;
           s.Insert(n);
           break;
    case 2:s.Delete();
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