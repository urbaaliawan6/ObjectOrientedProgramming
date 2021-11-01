#include<iostream>
using namespace std;
class abc
{
private:
	int a;
public:
	abc()
{
	cout<<"I M CONSTRUCTOR\n";
}
~abc()
{
	cout<<"I M DECONSTRUCTOR\n";
}
};
int main()
{
	abc obj;
}
