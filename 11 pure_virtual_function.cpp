/*	sometimes implementation of all functions can not be provided in base class as we dont know 
	the implementation
------------------------------------------------------------------------------------------------
	pure virtual function: declared in base class (by assigning 0 in delcaraiton) 
	and defined in derrived class
------------------------------------------------------------------------------------------------
	abstract class: class containing atleast one pure virtual function
	                (can not be instantiated) - object can not be created 
	                can have pointers and refrences
	                (if we do not override this function in derived class, 
					then both the classes become abstract )
*/

// ex a class shape: having a func getArea() has to be pure virtual as we dont know what the shape can be 
// so this class has to be abstract

#include<iostream>
using namespace std;

class Shape{ // abstract class as it has a pure virtual function
	public: 
		virtual void getArea() = 0; // pure virtual function
		
};

class Circle: public Shape{
	public:
		void getArea(){
			cout<<"Enter radius: "; 
			int r;
			cin>>r; cout<<endl;
			cout<<"The area is: "<< 3.14 * r*r<<endl<<endl;
		}
};

class Square: public Shape{
	public:
		void getArea(){
			cout<<"Enter the side: "; 
			int s;
			cin>>s;
			cout<<endl;
			cout<<"The area is: "<<s*s<<endl<<endl;
		}
};

int main(void){
	
	// Shape obj1; 
	// the above line will throw errror as Shape is an abstract class, so we can not instantiate it
	
	Circle obj1;
	// obj1.getArea(); // invokes the func of derived class, as func was made virtual in base class
	
	Square obj2;
	//obj2.getArea(); // square - getArea is invoked
	
	Shape *ptr;
	ptr = &obj1;
	ptr->getArea(); // circle
	ptr = &obj2;
	ptr->getArea(); // square
	
}













