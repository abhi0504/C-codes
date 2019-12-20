#include<conio.h>
#include<iostream.h>
	struct date
{	int date;
	int month;
	int year;
};
	struct addr
{	int house_number;
	char area[20];
	char city[20];
};
	struct EMPERC
{	int empno;
	char name[10];
	addr address;
	float salary;
	date joining_date;
};

void main()
{	clrscr();
	cout<<"enter any element";

	getch();
}




