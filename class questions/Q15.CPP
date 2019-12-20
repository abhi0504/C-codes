// class question no. 15 pg 198
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
	class worker
	  {
	    private : char wname[25];
		       float hrwrk,wgrate,totwage;
	    {		float calcwg();
	    public  : void in_data()
	      {
		int wno;
		 cout<<"\n\tEnter the worker name\n\t";
		  cin>>wno;
		   cout<<"\n\tEnter the worker name\n\t";
		    gets(wname);
		     cout<<"\n\tEnter working hours\n\t";
		      cin>>hrwrk;
		       cout<<"\n\tEnter the wage rate\n\t";
			cin>>wgrate;
			totwage=calcwag();
	       }
