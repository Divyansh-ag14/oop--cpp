#include<iostream>
using namespace std;

class BaseClass{
	
	public: 
		int x;
		BaseClass(){
			x=5;
			y=4;
			z=5;
		}
		
		void PrintProtected(){
			cout<<"The protected data member of the class is y with a value of "<<y;
		}
		
		void PrintPrivate(){
			cout<<"The private data member of the class is z with a value of "<<z;
		}
		
		protected:
			int y;
		
		private:
			int z; 
		
};

// this fucntion can not be used to print y and z
// to print y and z create functions under public access specifier so that they can be used in main [PrintPrivate() and PrintProtected()]

void OutsideFucntion(BaseClass obj){
	cout<<"The public data member of the class is x with a value of "<<obj.x;
}

class DerivedClass: public BaseClass{
	
	// contains everything from BaseClass except z as it is private 	
};

class DerivedClass2: protected BaseClass{
	
	// contains everything from BaseClass except z as it is private 	
	// both x and y are ptotected 
};

int main(void){
	BaseClass obj1;
	cout<<obj1.x;
	OutsideFucntion(obj1); // outputs 5
	cout<<endl;
	obj1.PrintProtected();
	cout<<endl<<endl;
	
	DerivedClass obj2;
	cout<<"Printed using DerrivedClass:"; cout<<endl<<endl;
	obj2.PrintPrivate();
	cout<<endl;
	obj2.PrintProtected();
	cout<<endl<<endl;
	
	DerivedClass2 obj3;
	//cout<< obj3.x; 
	//(will throw error (x is protected for this class),  uncomment the above line to verify)
}























