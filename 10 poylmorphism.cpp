/*	polyphormism: ability of data to take many forms or ability of a message 
	to be displayed in more than one form.
	----------------------------------------------------------------------------------------
	ex: a man is a bro, son, emp, etc at the same time
	----------------------------------------------------------------------------------------
	types: Compile time: early binding - (function/operator overloading, templates)
	       Runtime: late binding - dynaminc (virtual fucntions, function overriding(oop))
	-----------------------------------------------------------------------------------------
	Virtual Function: rules
	1. defined in base class with keyword virtual
	2. virtual functions should be accessed using pointer or reference of base class type 
	3. a class may have virtual destructor but it cannot have a virtual constructor
*/


#include<iostream>
using namespace std;

class BaseClass{
	public: 
		void virtual callClass(){
			cout<<"BaseClass was called"; cout<<endl;
		}
		void Func2(){
			cout<<"Function of BaseClass"; cout<<endl;
		}
};
class DerivedClass : public BaseClass{
	public:
		void callClass(){
			cout<<"DerivedClass was called"; cout<<endl;
		}
		void Func2(){
			cout<<"Function of DerivedClass"; cout<<endl;
		}
};

int main(void){
	BaseClass *ptr; // if we do not use virtual in base class ptr will always invoke the func of base class
	DerivedClass obj;
	ptr = &obj;
	// in line 44 and 45 same pointer calls the function of dervived and base class
	// using the same base class pointer we can point to multiple derived class
	ptr->callClass(); //DerivedClass as ptr points to object of DerivedClass
	ptr->Func2(); //BaseClass
	BaseClass obj2;
	ptr = &obj2;
	ptr->callClass(); // BaseClass as ptr points to object of BaseClass
	
	DerivedClass obj3;
	obj3.Func2();
}	
