#include<iostream.h>
#include<conio.h>
class abc
{
private:
int a,b;
public:
abc(int x,int y)
{
a=x;
b=y;
}
void sum(void)
{
cout<<"Addition="<<a+b;
}};
int main()
{
clrscr();
int p,q;
cout<<"Enter two values \n";
cin>>p>>q;
abc obj(p,q);
obj.sum();
}
void sub(void)
{
cout<<"Subtraction="<<a-b;
}};
int main()
{
clrscr();
int p,q;
cout<<"Enter two values \n";
cin>>p>>q;
abc obj(p,q);
obj.sub();
}
void mul(void)
{
cout<<"Multiplication="<<a*b;
}};
int main()
{
clrscr();
int p,q;
cout<<"Enter two values \n";
cin>>p>>q;
abc obj(p,q);
obj.mul();
getch();
}