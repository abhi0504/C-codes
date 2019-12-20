//october 23 2017
//circular Queue
#include<fstream.h>
#include<conio.h>
#define m 5
  class cqueue
    {
     int a[m],rear,front;
     public:
     cqueue()
       {
        rear=front=-1;
       }
     void insert(int no)
       {
        if((rear==m-1&&front==0)||(front=rear+1))
          {
           cout<<"Queue is full";
           return;
          }

        if(rear==m-1)
        rear=0;

        else
        rear++;
        a[rear]=no;

        if(front==-1)
        front=0;
       }
    void Delete()






































void main()
{
 clrscr();

 getch();
}