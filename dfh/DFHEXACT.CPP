//july 17 2017
//DFH for exact word
#include<fstream.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>
	void count_this()
	 {
	  ifstream f;
	  char words[99];
	  int c;
	  f.open("CONTENT.txt");
	  if(!f)
	   {
	    cout<<"File can't open";
	    return;
	   }
	  while(!f.eof())
	   {
	    f>>words;
	    if(f.eof())
	    break;
	    if(strcmp("cout",words)==0)
	    c++;
	   }
	  cout<<"No. of cout in the program is ="<<c;
	  f.close();
	  }
	  void main()
	   {
	    count_this();
	    getch();
	   }


