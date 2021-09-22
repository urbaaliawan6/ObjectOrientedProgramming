#include<iostream>
#include<string>
using namespace std;

class HR{
public:
 string designation ="Head\n";
 string department ="Telecommunication\n";

};
class Employee:public HR{
public:
string salary="50000000\n";
string emp_id="0001\n";
};
int main()
{
Employee a;
cout<<a.department;
cout<<a.designation;
cout<<a.salary;
cout<<a.emp_id;
}
