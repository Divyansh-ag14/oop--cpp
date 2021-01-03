// pointer to object, passing objects as arguments and returning objects from functions

#include<iostream>
using namespace std;

class ComplexNumber{
	
	private: // access specifier
		// data members
		int real;
		float imaginary;
	
	public:
		
		ComplexNumber(){ // deafult constructor
			real = 0;
			imaginary = 0;	
		} 
		
		ComplexNumber(int r, float i){ // para constructor
			real = r;
			imaginary = i;
		}
		
		void Displaydata(){
			cout<<"Complex number is: "<<real<<" + "<<imaginary<<"i"<<endl;
		}
		
		int getreal(){
			return real;
		}
		
		float getimag(){
			return imaginary;
		}
};

// this func is outside class and cannot directly access private members so we have used func - getreal() and getimag()

ComplexNumber add(ComplexNumber n1, ComplexNumber n2){ // function of type ComplexNumber: note(declared outside class)
	    int r;                                        // parameters - 2 objects of type class
		float i;
		r = n1.getreal() + n2.getreal();
		i = n1.getimag() + n2.getimag();
		
		// to return these values we need a variable of type class
		
		ComplexNumber temp(r,i);
		return temp; // returning object from function	                                               
}

int main(void){
	ComplexNumber comp1(5, 0.6), comp2(2, 0.2), comp3, comp4;
	
	comp3 = add(comp1, comp2); // passing objects as arguments
	
	comp1.Displaydata();
	comp2.Displaydata();
	cout<<endl;
	
	cout<<"Addition on comp1 and comp2:"<<endl<<endl;
	comp3.Displaydata();
	
	ComplexNumber *ptr; // pointer of type ComplexNumber: (used to point to objects)
	cout<<endl<<"Pointer to object:"<<endl<<endl;
	
	ptr = &comp1;
	ptr -> Displaydata();
	
	ptr = &comp2;
	ptr->Displaydata();
	
	ptr = &comp3;
	ptr->Displaydata(); 	
}
