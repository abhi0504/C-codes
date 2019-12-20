 //scope by variable
#include<iostream.h>
#include<conio.h>
int a=10;//global scope
void func(int a)    //function scope
{
	cout <<a;
	a = 5;
	cout<<a;
}
void main()
{       clrscr();  //local to main scope
	int x;
	cin >>x;{int d=4; cout<<d<<a;}
	cout<<x;
	func(x);
	cout<<"\tAfter calling\t"<<x;
	getch();
}
/*OUTPUT:-
1234
410123412345    After calling   1234
*/






















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

