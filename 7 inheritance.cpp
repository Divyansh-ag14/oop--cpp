// inheritence - define a class in terms of another class
// private data members are never inherited

// public in - public and protected data members remain same
// protected in - both become protected data members
// private in - both become private note:(no further class can access data members of this class as all of them are private)

#include<iostream>
using namespace std;

// base class
class Shape{
	
	protected:
		int width;
		int height;
		
	public:
		void setwidth(int w){
			width = w;
		}
		
		void setheight(int h){
			height = h;
		}
};

class Rectangle: public Shape{
	
	public:
		int getArea(){
			return (width * height);
		}
};

// rec of type Rectangle can access all the member functions of the base class Shape

int main(void){
	Rectangle rec;
	rec.setheight(3);
	rec.setwidth(5);
	cout<<"Area is "; cout<<rec.getArea(); // outputs 15
}
