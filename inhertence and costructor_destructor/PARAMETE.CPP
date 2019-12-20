//q 12 pg 294
//date 11 july 2017
#include<iostream.h>
#include<conio.h>
	 class A
	{
	 public :
	 A() {cout<<"A";}

	~A()
	{
	 cout<<"class a";
	}
	};

	class B
	 {
	  public :
	  B(){cout<<"B";}
	  ~B(){cout<<"~B";}
	 };

	 class C
	  {
	   public :
	   C(){cout<<"C";}
	   ~C(){cout<<"~C";}
	   private :
	    B c1;
	    A c2;
	   };

	 class  D
	  {
	   public:
	    D(){cout<<"D";}
	    ~D(){cout<<"~D";}
	  };

	 class E : public C
	  {
	   public:
	    E(){cout<<"E";}
	    ~E(){cout<<"~E";}
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

