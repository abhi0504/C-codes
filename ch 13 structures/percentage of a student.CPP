//percentage calculation
#include<iostream.h>
#include<conio.h>
struct data
{
char name[20];
int p,c;
float percent;
}d[20];
void main()
{clrscr();
for(int i=0;i<2;i++)
{cout<<"enter data\n"<<i;
cout<<"enter name\n";
cin>>d[i].name;
cout<<"enter marks in physics\n";
cin>>d[i].p;
cout<<"enter marks in chemistry\n";
cin>>d[i].c;
}
for(i=0;i<2;i++)
{cout<<"\nNAME\n";
cout<<d[i].name;
cout<<"\nphysics"<<d[i].p;
cout<<"\nchemistry"<<d[i].c;
d[i].percent=(d[i].p+d[i].c)/2;
cout<<"\npercent";
cout<<d[i].percent<<"%";}
getch();
}
/*output is
enter data
0enter name
shubhanshu
enter marks in physics
90
enter marks in chemistry
90
enter data
1enter name
tushar
enter marks in physics
89
enter marks in chemistry
88

NAME
shubhanshu
physics90
chemistry90
percent90%
NAME
tushar
physics89
chemistry88
percent88%
  */





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





