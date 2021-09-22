#include<iostream>
using namespace std;
class Automobile{
public:
void drive()
{
cout<<"I drive this car to school \n";
}
};
class Ford{
public:
void breaks()
{
cout<<"Car breaks are use to stop the car\n";
}
};
class aqua:public Automobile,public Ford
{
public:
void familycar()
{
cout<<"This car is use for dailyb course\n";
}
};
int main()
{
aqua a;
a.familycar();
a.breaks();
a.drive();
}
