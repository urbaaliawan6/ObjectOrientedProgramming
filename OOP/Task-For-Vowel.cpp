#include<iostream>
using namespace std;
class number
{
	private:
		char num;
		public:
			void input()
			{
				cout<<"Enter Your character\n";
				cin>>num;
			}
			void output()
			{
				if(((num>='a')&&(num<='z')) || ((num>='A')&&(num<='Z')))
				{
					cout<<"Constructor\n";
				}
				
				else if((num>='0')&&(num<='9'))
				{
					cout<<"Distructor\n";
				}
				
			}
			};
	
int main()
{
	number obj1;
	obj1.input();
	obj1.output();
	}
