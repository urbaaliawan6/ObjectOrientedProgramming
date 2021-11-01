#include<iostream.h>
#include<conio.h>
class abc
{
private:
int a,b;
public:
abc(int x,int y)
{
a=x;   b=y;
}
void area()
{
cout<<"AREA="<<a*b;
}};
int main()
{
clrscr();
int l,w;
cout<<"Enter  value for Length and width \n";
cin>>l>>w;
abc obj(l,w);
obj.area();
getch();
}
