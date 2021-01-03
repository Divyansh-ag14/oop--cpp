#include<iostream>
using namespace std;

class ComplexNumber{
	
	private: // access specifier
		// data members
		int real;
		float imaginary;
	
	public:
		
		ComplexNumber(){ // deafult constructor
			
		} 
		
		ComplexNumber(int r, float i){ // para constructor
			real = r;
			imaginary = i;
		}
		
		void Displaydata(){
			cout<<"Complex number is: "<<real<<" + "<<imaginary<<"i"<<endl;
		}
		
		/*int getreal(){
			return real;
		}
		
		float getimag(){
			return imaginary;
		}*/
		
		ComplexNumber add(ComplexNumber n1, ComplexNumber n2){
			int r;
			float i;
			r = n1.real + n2.real;
			i = n1.imaginary + n2.imaginary;
			ComplexNumber temp(r,i);
			return temp;
		}
};

int main(void){
	ComplexNumber comp1(5, 0.6), comp2(2, 0.2), comp3, comp4;
	comp1.Displaydata();
	comp2.Displaydata();
	cout<<endl<<"Addition on comp1 and comp2"<<endl<<endl;
	comp3 = comp3.add(comp1,comp2);
	comp3.Displaydata();
	
	cout<<endl<<endl<<"Displaying details using pointer:"<<endl;
	comp4 = comp4.add(comp1, comp2);
	ComplexNumber *ptr;
	ptr = &comp1;
	ptr->Displaydata();
	ptr = &comp2;
	ptr->Displaydata();
	ptr= &comp4;
	ptr->Displaydata();
}
