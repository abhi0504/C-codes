#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
class stud
{  char Name[25];
   int  rno;
   int  marks;
   char grade;
   public:
	void enter()
	{
	   cout<<"\n Enter Name: ";
	   gets(Name);
	   cout<<" Enter Roll No: ";
	   cin>>rno;
	   cout<<" Enter Marks: ";
	   cin>>marks;
	}
	void calcgrade()
	{   if(marks<=100&&marks>=90)
		 grade='A';
	     else if(marks<=89&&marks>=80)
		 grade='B';
	     else if(marks<=79&&marks>=70)
		 grade='C';
	     else if(marks<=69&&marks>=60)
		 grade='D';
	     else if(marks<=59&&marks>=50)
		 grade='E';
	     else if(marks<=49&&marks>=40)
		 grade='F';
	     else
		 grade='G';
	     return;
	}
	void disp()
	{  calcgrade();
	   cout<<"\n\t\tStudent Details:";
	   cout<<"\n Name: ";
	   cout<<Name;
	   cout<<"\n Roll No: ";
	   cout<<rno;
	   cout<<"\n Marks: ";
	   cout<<marks;
	   cout<<"\n Grade: ";
	   cout<<grade;
	}
	int getrno()
	{  return rno;
	}
}s;
void Deleterec()
{
  ifstream f1("stud.dat",ios::binary);
  ofstream f2("temp.dat",ios::binary);
  if(!f1&&!f2)
  cout<<"\n Unable to open file!!!";
  else
  { int rno;
    cout<<"\nEnter Roll no to be deleted";
    cin>>rno;
    while(f1.read((char*)&s,sizeof s))
    {  if(s.getrno()!=rno)
	f2.write((char*)&s,sizeof s);
       else
       { cout<<"Record to be deleted\n";
	 s.disp();
       }
    }
  }
  f1.close();
  f2.close();
  remove("stu.dat");
  rename("temp.dat","stud.dat");
}
void insert()
{  stud New;
   int flag=0;
   cout<<"\nEnter record to be inserted\n";
   New.enter();
   ifstream f1("stud.dat",ios::binary);
   ofstream f2("temp.dat",ios::binary);
   while(f1.read((char*)&s,sizeof s))
   {  if(s.getrno()<=New.getrno())
	f2.write((char*)&s,sizeof s);
      else
      { f2.write((char*)&New,sizeof New);
	f2.write((char*)&s,sizeof s);
	cout<<"Record inserted";
	flag=1;
	break;
      }
      if(flag)
       while(f1.read((char*)&s,sizeof s))
       f2.write((char*)&s,sizeof s);
      else
       f2.write((char*)&s,sizeof s);
   }
   f1.close();
   f2.close();
   remove("stud.dat");
   rename("temp.dat","stud.dat");
   ifstream f("stud.dat",ios::binary);
   if(!f)
     cout<<"Unable to open";
   else
   { while(f.read((char*)&s,sizeof s))
     s.disp();
   }
   f.close();
}

void disp()
{  ifstream f("stud.DAT",ios::binary);
   //int c=1;
   while(!f.eof())
   {
    f.read((char*)&s,sizeof(s));
    if(f.eof())
     break;
    else
    { s.disp();
    /* cout<<"\n Student "<<c<<" Details:";
     cout<<"\n Name: ";
     cout<<s.Name;
     cout<<"\n Roll No: ";
     cout<<s.rno;
     cout<<"\n Marks: ";
     cout<<s.marks;
     cout<<"\n Grade: ";
     cout<<s.grade;
     c++;*/
    }
   }
}


void mod()
{
}
void main()
{  clrscr();
  int c;
  clrscr();
  cout<<"\tBinary Menu:";
  cout<<"\n1.Delete a record from binary file";
  cout<<"\n2.Insert a record in binary file ";
  cout<<"\n3.Modify a record in binary file";
  cout<<"\n4.Exit";
do
{
cout<<"\nEnter menu choice: ";
cin>>c;
switch(c)
{
	case 1: Deleterec();
		break;
	case 2: insert();
		break;
	case 3: mod();
		break;
	case 4: exit(getch());
		break;
	default: cout<<"\nWrong Choice!!!";
}
}while(c>='1'||c<='4');
getch();
}