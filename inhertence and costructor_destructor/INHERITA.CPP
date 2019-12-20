//july 5 2017
//Inheritance
# include <iostream.h>
# include <stdio.h>
# include <conio.h>
	class publication
	 {
	  private :
	  char title[25];
	  float price;
	  public :
	  void getdata()
	   {
	    cout<<"\n\tEnter the title of book\n\t";
	    gets(title);
	    cout<<"\n\tEnter the price of book\n\t";
	    cin>>price;
	   }
	  void putdata()
	   {
	    cout<<"\n\tThe title of the book is\n\t";
	    puts(title);
	    cout<<"\n\tThe price of book is\n\t"<<price;
	   }
	 };
	class book:public publication
	 {
	  private:
	  int page_count;
	  public :
	  void getdata()
	   {
	    publication::getdata();
	    cout<<"\n\tEnter the number of pages of book\n\t";
	    cin>>page_count;
	   }
	  void putdata()
	   {publication::putdata();
	    cout<<"\n\tThe no of pages of books are\n\t"<<page_count;
	   }
	 };
	class tape:public book
	 {
	  float playing_time;         //IN MINUTES
	  public :
	  void getdata()
	   {
	    book::getdata();
	    cout<<"\n\tEnter playing type of video\n\t";
	    cin>>playing_time;
	   }
	  void putdata()
	   {
	    book::putdata();
	    cout<<"\n\tthe playing time is\n\t"<<playing_time;
	   }
	 };
	void main()
	 {
	  clrscr();
	  book s1;
	  tape s2;
	  s1.getdata();
	  s2.getdata();
	  s1.putdata();
	  s2.putdata();
	  getch();
	 }
	 /* output
	Enter the title of book
	king	

	Enter the price of book
	2000

	Enter the number of pages of book
	439

	Enter the title of book
	soul

	Enter the price of book
	1500

	Enter the number of pages of book
	297

	Enter playing type of video
	5 minutes

	The title of the book is
	king

	The price of book is
	2000

	The no of pages of books are
	439

	The title of the book is
	soul

	The price of book is
	1500

	The no of pages of books are
	297

	the playing time is
	5
      */





