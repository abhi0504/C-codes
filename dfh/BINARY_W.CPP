// july 26,2017
//Binary
#include<fstream.h>
#include<conio.h>
	class A
	 {
	  int a;
	  public:
	  void input()
	  {
	   cout<<"\nentera";
	   cin>>a;
	  }
	  void display()
	  {
	   cout<<a;
	  }
	  };
	  void write()
	  {
	   ofstream fo;
	   A c;
	   fo.open("a.dat",ios::binary|ios::out);
	   if(!fo)
	   {
	    cout<<"file not open";
	    exit(0);
	   }
	   else
	   {
	    while(!fo.eof())
	    {
	     c.input();
	     fo.write((char*)&c,sizeof(c));
	    }
	    }
	    fo.close();
	    }
	    void read()
	    {
	     ifstream fin;
	     A c;
	     fin.open("A.dat",ios::binary|ios::in);
	     if(!fin)
	     {
	      cout<<"\nfile not open";
	      exit(0);
	     }
	     else
	     {
	      while(!fin.eof())
	      {
	       fin.read((char*)&c,sizeof(c))





