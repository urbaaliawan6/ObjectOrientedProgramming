#include<iostream.h>
#include<conio.h>
class myclass
{
private:
char m;
public:
void in()
{
cout<<"Enter a character \n";
cin>>m;
}
void out()
{
if(((m>='a')&&(m<='z'))||((m>='A')&&(m<='Z')))
{
cout<<"ALPHABET";
}
else if((m>='0')&&(m<='9'))
{
cout<<"DIGIT";
}
else
{
cout<<"SYMBOL";
}}};
int main()
{
clrscr();
myclass myobj;
myobj.in();
myobj.out();
getch();
}
