#include<iostream>
using namespace std;

class school {
	public:
		void students()
		{
			cout <<"G\n\n";
		}
};

class teacher {
	public:
		void salary()
		{
			cout <<"B\n\n";
		}
};

class student {
	public:
		void mark()
		{
			cout <<"E\n\n";
		}
};

class degree {
	public:
		void subject()
		{
			cout <<"A\n\n";
		}
};

class salarys:public school, public teacher, public degree 
{
	public:
		void amount()
		{
			cout <<"C\n\n";
		}
};

class marks {
	public:
		void numbers()
		{
			cout <<"D\n\n";
		}
};

class subjects:public school, public student, public marks
{
	public:
		void books()
		{
			cout <<"F\n\n";
		}
};

int main()
{
	salarys a;
	a.students();
	a.salary();
	a.subject();
	a.amount();
	
	subjects b;
	b.students();
	b.mark();
	b.books();
	b.numbers();
}
