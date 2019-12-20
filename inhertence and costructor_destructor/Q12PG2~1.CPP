//q 12 pg 294
//date 11 july 2017
#include<iostream.h>
#include<conio.h>
	 class A
	{
	 public :
	 A() {cout<<"\n\tAn\t";}      //constructor

	~A()                          //destructor
	{
	 cout<<"\n\tclass a\n\t";
	}
	};

	class B
	 {
	  public :
	  B(){cout<<"\n\tB\n\t";}       //constructor
	  ~B(){cout<<"\n\t~B\n\t";}     //destructor
	 };

	 class C
	  {
	   public :
	   C(){cout<<"\n\tC\n\t";}       //constructor
	   ~C(){cout<<"\n\t~C\n\t";}     //destructor
	   private :
	    B c1;
	    A c2;
	   };

	 class  D
	  {
	   public:
	    D(){cout<<"\t\nD\n\t";}       //constructor
	    ~D(){cout<<"\n\t~D\n\t";}     //destructor
	  };

	 class E : public C               //inhertitence
	  {
	   public:
	    E(){cout<<"\n\tE\n\t";}       //constructor
	    ~E(){cout<<"\n\t~E\n\t";}     //destructor
	   private :
	    D e1;
	    C e2;
	  };
	  int main()
	   {
	    clrscr();
	    E e ;
	   getch();
	   return 0;
	   }

