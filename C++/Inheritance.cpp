#include <iostream>
#include <string>
using namespace std;
class company {
	public:
		string brand = "samsung";
		void work() {
		cout << "my mobile \n" ;	
		}
};

class mobile: public company {
	public:
		string model = "apple";
		};
		
		int main()
		{
		mobile mymobile;
		mymobile.work();
		cout << mymobile.brand + " " + mymobile.model;
		return 0;
	}
