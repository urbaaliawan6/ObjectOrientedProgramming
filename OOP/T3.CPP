#include<iostream.h>
#include<conio.h>
class myclass
{
public:
void in()
{
cout<<"No \tSquare \t\tCube\n";
cout<<"__________________________\n";
for(int a=0;a<=10;a++)
{
cout<<a<<"\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
}
}
};
int main()
{
clrscr();
myclass obj;
obj.in();
getch();
}