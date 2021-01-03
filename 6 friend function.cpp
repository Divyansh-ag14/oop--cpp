// friend function: can directly access (private and protected) data members outside class
// used in special cases, when we want to access data members without using objects

// (((its prototype is defined inside class)))
// it is not a member function

#include<iostream>
using namespace std;

class Distance{
	
	private:
		
		int meters;
	
	public:
		
		Distance(){ //default constructor
			meters = 0;
		}
		
		Displaydata(){
			cout<<"Meters value: "<<meters;
			cout<<endl; 
		}
		
		// prototype of friend function
		
		friend void addvalue(Distance &d); // parameters - address of object or (address of variable type class)
			
};

void addvalue(Distance &d){ // directly uses meters
	d.meters += 5; 
}

int main(void){
	Distance d1;
	d1.Displaydata();
	addvalue(d1);
	d1.Displaydata();
	addvalue(d1);
	d1.Displaydata();
}
