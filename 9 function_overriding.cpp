/* function overloading: 2 or more functions can have the same name but different parameters
   -----------------------------------------------------------------------------------------------------
   ex: print(int), print(double)
   -----------------------------------------------------------------------------------------------------
   happens in the same class 
   -----------------------------------------------------------------------------------------------------
   example  of polyphormism
*/
	
/* function overriding:  possible only with inheritance
   -----------------------------------------------------------------------------------------------------
   the child class defines the same function which is defined in its parent class
   ------------------------------------------------------------------------------------------------------
   if we create a member of dervied class and call the member function which exits in both the classes,
   then the member function of derived class is invoked.
*/ 

#include<iostream>
using namespace std;

class BaseClass{
	public:
		void printMessage(){
			cout<<"This function call was made from BaseClass";
			cout<<endl;
		}
};

class DerivedClass1 : public BaseClass{
	public:
		void printMessage(){
			cout<<"This function call was made from DerivedClass1";
			cout<<endl;
		}
};

class DerivedClass2 : public BaseClass{
	public:
		void printMessage(){
			cout<<"Making function call from BaseClass using DerivedClass2"; cout<<endl;
			
			// scope resoultion operator to invoke the member function of BaseClass
			BaseClass :: printMessage();
		}
};

int main(void){
	BaseClass obj1;
	obj1.printMessage(); // baseclass
	DerivedClass1 obj2;
	obj2.printMessage(); // derivedclass1
	cout<<endl;
	DerivedClass2 obj3;
	obj3.printMessage(); // derivedclass2 -> baseclass
}



















