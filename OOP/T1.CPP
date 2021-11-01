#include<iostream.h>
#include<conio.h>
class myclass
{
private:
int sal;
public:
void in()
{
cout<<"Enter salary \n";
cin>>sal;
}
void out()
{
if(sal<10000)
{
sal=sal+200;
}
else
{
sal=sal+100;
}
cout<<"Next salary="<<sal;
}
};
int main()
{
clrscr();
myclass myobj;
myobj.in();
myobj.out();
getch();
}