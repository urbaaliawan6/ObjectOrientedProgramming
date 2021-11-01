#include<iostream.h>
#include<conio.h>
class abc
{
private:
int a;
public:
abc(int x)
{
a=x;
}
void area()
{
cout<<"AREA="<<3.14*a*a;
}};
int main()
{
clrscr();
int r;
cout<<"Enter value of radius \n";
cin>>r;
abc obj(r);
obj.area();
getch();
}
