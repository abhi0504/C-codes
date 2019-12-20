#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
class stud
{
	  public:
	  char name[25];
	  int  rno;
	  int  marks;
	  char grade;
	  int getrno()
   {
     return rno;
   }
   char* getname()
   {
     return name;
   }
}s;
void calcgrade()
{
	if(s.marks<=100&&s.marks>=90)
	 s.grade='A';
	else if(s.marks<=89&&s.marks>=80)
	 s.grade='B';
	else if(s.marks<=79&&s.marks>=70)
	 s.grade='C';
	else if(s.marks<=69&&s.marks>=60)
	 s.grade='D';
	else if(s.marks<=59&&s.marks>=50)
	 s.grade='E';
	else if(s.marks<=49&&s.marks>=40)
	 s.grade='F';
	else
	 s.grade='G';
}
void enter()
{
	char ch;
	 ofstream f("DATA.DAT",ios::binary|ios::app);
	 do
   {
	cout<<"\n Enter Name: ";
	gets(s.name);
	cout<<" Enter Roll No: ";
	cin>>s.rno;
	cout<<" Enter Marks: ";
	cin>>s.marks;
	calcgrade();
	f.seekp(0,ios::end);
	f.write((char*)&s,sizeof(s));
	cout<<"\nDo you wish to enter more ? (Y/N)";
	cin>>ch;
   }
   while((ch=='y')||(ch=='Y'));
   f.close();
}
void disp()
{
       ifstream f("DATA.DAT",ios::binary);
       int c=1;
       while(!f.eof())
   {
       f.read((char*)&s,sizeof(s));
       if(f.eof())
	break;
       else
    {
     cout<<"\n Student "<<c<<" Details:";
     cout<<"\n Name: ";
     cout<<s.name;
     cout<<"\n Roll No: ";
     cout<<s.rno;
     cout<<"\n Marks: ";
     cout<<s.marks;
     cout<<"\n Grade: ";
     cout<<s.grade;
     c++;
    }
   }
}
void searchr(int no)
{
 ifstream f("abhishek.DAT",ios::binary);
   int c=1;
   int flag=0;
   while(!f.eof())
   {
    f.read((char*)&s,sizeof(s));
    if(f.eof())
     break;
    else
    {
     c++;
     if(s.rno==no)
     {
      flag=1;
      cout<<"\n Student "<<c<<" Details:";
      cout<<"\n Name: ";
      cout<<s.name;
      cout<<"\n Roll No: ";
      cout<<s.rno;
      cout<<"\n Marks: ";
      cout<<s.marks;
      cout<<"\n Grade: ";
      cout<<s.grade;
     }
    }
   }
 if(flag==0)
 cout<<"Roll No. Not Found!!!";
}
void searchn(char name[])
{
 ifstream f("abhishek.DAT",ios::binary);
   int c=1;
   int flag=0;
   while(!f.eof())
   {
    f.read((char*)&s,sizeof(s));
    if(f.eof())
     break;
    else
    {
     c++;
     if(strcmpi(s.getname(),name)==0)
     {
      flag=1;
      cout<<"\n Student "<<c<<" Details:";
      cout<<"\n Name: ";
      cout<<s.name;
      cout<<"\n Roll No: ";
      cout<<s.rno;
      cout<<"\n Marks: ";
      cout<<s.marks;
      cout<<"\n Grade: ";
      cout<<s.grade;
     }
    }
   }
 if(flag==0)
 cout<<"Name Not Found!!!";
}
void main()
{
 clrscr();
 char ch;
 int no;
 cout<<"Menu Driven Code!!!";
 do
{
	cout<<"\nChoose from the options :";
	cout<<"\n1. Enter Details.";
	cout<<"\n2. Display Details.";
	cout<<"\n3. Search by Roll No.";
	cout<<"\n4. Search by Name ";
	cout<<"\n5. EXIT \n";
	cin>>no;
 switch (no)
  {
	case 1 : {
		cout<<"Enter the Details :";
		enter();
		break;
		  }
	case 2 : {
		 cout<<"The Details written in file :";
		 disp();
		 break;
		 }
	case 3 : {
		 int no;
		 cout<<"Enter the roll no. to be searched :";
		 cin>>no;
		 searchr(no);
		 break;
		 }
	case 4 : {
		 char name[25];
		 cout<<"Enter the name to be searched :";
		 gets(name);
		 searchn(name);
		 break;
		 }
	default : {
		 cout<<"WRONG CHOICE :";
		 exit(0);}
  }
  cout<<"\nDo you wish to continue ? (Y/N) ";
  cin>>ch;
//  clrscr();
 }
 while((ch=='y')||(ch=='Y'));
 getch();
}
/*
output
Menu Driven Code!!!
Choose from the options :
1. Enter Details.
2. Display Details.
3. Search by Roll No.
4. Search by Name
5. EXIT
1
Enter the Details :
 Enter Name: himank
 Enter Roll No: 16
 Enter Marks: 89

Do you wish to enter more ? (Y/N)n

Do you wish to continue ? (Y/N) y

Choose from the options :
1. Enter Details.
2. Display Details.
3. Search by Roll No.
4. Search by Name
5. EXIT
2
The Details written in file :
 Student 1 Details:
 Name: akash
 Roll No: 4
 Marks: 78
 Grade: C
 Student 2 Details:
 Name: himank
 Roll No: 16
 Marks: 89
 Grade: B
 Student 3 Details:
 Name: Abhishek
 Roll No: 1
 Marks: 100
 Grade: A
Do you wish to continue ? (Y/N) y
Choose from the options :
1. Enter Details.
2. Display Details.
3. Search by Roll No.
4. Search by Name
5. EXIT
3
Enter the roll no. to be searched :1

 Student 2 Details:
 Name: abhishek
 Roll No: 1
 Marks: 100
 Grade: A
Do you wish to continue ? (Y/N) y

Choose from the options :
1. Enter Details.
2. Display Details.
3. Search by Roll No.
4. Search by Name
5. EXIT
4
Enter the name to be searched :himanshu
Name Not Found!!!
Do you wish to continue ? (Y/N) n

*/









