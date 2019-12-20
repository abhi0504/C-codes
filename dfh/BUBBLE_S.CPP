//DATE:21-08-2017 && DAY:MONDAY
#include<iostream.h>
#include<conio.h>
/************
 BUBBLE SORT
*************/
void bubbsort(int a[],int s)
{
 int temp;
 for(int i=0;i<s;i++)
 {
  for(int j=0;j<s-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
    for(int f=0;f<s;f++)
     cout<<a[f]<<"  ";
     cout<<endl;
   }
  for(int k=0;k<s;k++)
  cout<<a[k]<<"  ";
  cout<<endl;
 }
}
void main()
{
 clrscr();
 int a[5];
 cout<<"ENTER ARRAY\n";
 for(int i=0;i<5;i++)
 {
  cout<<"ELEMENT "<<i+1<<"\t";
  cin>>a[i];

  }
  bubbsort(a,5);
 getch();
 }
/* OUTPUT
 ENTER ARRAY
 ELEMENT 1       34
 ELEMENT 2       90
 ELEMENT 3       7
 ELEMENT 4       45
 ELEMENT 5       67

 34  90  7  45  67
 34  7  90  45  67
 34  7  45  90  67
 34  7  45  67  90
 34  7  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90
 7  34  45  67  90

*/