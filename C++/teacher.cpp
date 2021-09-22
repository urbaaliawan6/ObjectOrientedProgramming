#include<iostream>
using namespace std;
 class teacher{
 	public:
 		void teach()
 		{
 			cout<<"teacher\n\n";
		 }
 };
 
 class science 
 {
 	public:
 		void sci()
 		{
 			cout<<"science teacher\n\n";
		 }
 };
 class biology:public teacher ,public science  
 {
 	public:
 		void bio()
 		{
 			cout<<"biology teacher\n\n";
		 }
 };
 
class maths:public teacher
{
 	public:
 		void calculator()
 		{
 			cout<<"maths teacher\n\n";
		 }
 };
 
 
 
 int main()
 {
 	biology a;
 	a.teach();
	a.sci();
	a.bio();
	
	maths b;
	b.calculator();
 }

