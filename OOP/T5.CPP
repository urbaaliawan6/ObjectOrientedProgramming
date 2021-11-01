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
void dis()
{
cout<<a;
}};
int main()
{
clrscr();
abc obj(2);
obj.dis();
getch();
}