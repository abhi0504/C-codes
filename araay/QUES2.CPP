#include<iostream.h>
#include<conio.h>
	int sum(char a, int b[4])
	   {
	     int i, sum=0;
	      cout<<"\n\tenter charchter (e,o)\n\t";
	       cin>>a;
	     for(i=0;i<4;i++)
	      {
		if(a=='e')
		  {
		    if(b[i]%2==0)
		     sum=sum+b[i];
		  }
	      }
	      return sum;
	   }
	int sum(int b[4])
	  {
	    int sum =0;
	      for(int i=0;i<4;i++)
		{
		  sum=sum + b[i];
		}
	     return sum;
	  }
       void main(void)
	  {
	    int a[4],c,d;
	     clrscr();
	      cout<<"\n\tenter array\n\t";
	      for(int i=0;i<4;i++)
	       {
		cin>>a[i];cout<<"\n\t";
	       }
	    char ch;
	     c=sum(ch,a);
	      d=sum(a);
	       cout<<"\n\tThe value of first function is\n\t"<<c;
		cout<<"\n\tThe value of 2nd function is\n\t"<<d;
		 getch();
	  }








