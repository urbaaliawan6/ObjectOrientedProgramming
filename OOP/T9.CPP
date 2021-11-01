#include<iostream.h>
#include<conio.h>
class abc
{
public:
abc()
{
int a,b;
clrscr();
for(a=1;a<=10;a++)
{
for(b=1;b<=a;b++)
cout<<"*";
cout<<endl;
getch();
}
}
};