#include<iostrem.h>
#include<conio.h>

	void fun(char a)
	      {   cout<<"char is\n\n\t\t"<<a;
	      }
	void fun(int a)
	      {   cout<<"int is \n\n\t\t"<<a;
	      }
	void fun(float a)
	     {    cout<<"float is\n\n\t\t"<<a;
	     }

	     void main()
		{   clrscr();
		     fun('a');
		     fun(4);
		     fun(4.7f);
		    getch();
		}