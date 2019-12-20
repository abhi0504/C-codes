#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
	struct st
	  { int r_no[20];
	    char name[20];
	  }s1;

	void input()
	{  cout<<"\n\n\t\tEnter roll no.\n\n\t\t";
	   for(int i=0;i<5;i++)
	   cin>>s1.r_no[i];
	   cout<<"\n\n\t\tEnter name\n\n\t\t";
	   for( i=0;i<5;i++)
	   cin>>name[i];
	  // return s1;
	}
	void display ()
	 { cout<<"\n\n\t\tRoll no. is\n\n\t\t";
	   for( i=0;i<5;i++)
	   cout<<s1.r_no[i];
	   cout<<"\n\n\t\tname\n\n\t\t"<<s1.name;
	   for( i=0;i<5;i++)
	   cout<<s1.name[i];
	   //return s1;
	}
	void main()
	{       clrscr();
		int choice;
	do {    cout<<"\n\n-----------MENU-------------\n";
		cout<<"1.input\n";
		cout<<"2.display\n";
		cout<<"3.exit\n";
		cout<<"------------------------------";
		cout<<"\nEnter Your Choice\t";
		cin>>choice;
		switch(choice)
		{
		   case 1: input();
			   break;
		   case 2: display();
			   break;
		   case 3: exit(0);
			   break;
		   default: cout<<"\ninvalid choice\n";
			   break;
		}
	   }while(choice!=3);

	   void	input();
	   void	display();

		getch();
	}

