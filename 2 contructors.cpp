#include<iostream>
#include<string>
using namespace std;

class Cars{
	private: // access specifier only member fucntions of this class can get access to the data members
	
	string car_company;
	string car_name;
	string fuel_type;
	double price;
	
	public: // can be used in main 
	
	Cars(){ //default constructor: no parameters (constructor must have same name as class and must be declared under public)
		cout<<"Default constructor called for car1"<<endl; // when object is created constructor is called first
	}
	
	// parameterized contructor for car2: called automatically when car2 is initialized
	Cars(string cname, string carname, string ftype, double pr){
		cout<<"Para constructor called for car2"<<endl;
		car_company = cname;
		car_name = carname;
		fuel_type = ftype;
		price = pr;		
	}
	
	// copy constructor for car3: parameter - address of object of type class
	Cars(Cars &obj){
		// lhs is for car3 and rhs is for the object having values or which is getting copied
		cout<<"Copy constructor called for car3"<<endl;
		car_company = obj.car_company;
		car_name = obj.car_name;
		fuel_type = obj.fuel_type;
		price = obj.price;
	}
	
	void setdata(string cname, string carname, string ftype, double pr){ // member function
		car_company = cname;
		car_name = carname;
		fuel_type = ftype;
		price = pr;
	}
	void displaydata(){ // member function
		cout<<"Car details:"<<endl<<endl;
		cout<<car_company<<endl;
		cout<<car_name<<endl;
		cout<<fuel_type<<endl;
		cout<<price<<endl;
	}
};

int main(void){
	Cars car1; // object (car1) - variable of type class: (class is a user defined data type)
	
	string coname, cname, ftype;
	double p;
	// setting data in car1 using member function
	cout<<"Enter the company name: "; cin>>coname;
	cout<<endl;
	
	cout<<"Enter the car name: "; cin>>cname;	
	cout<<endl;
	
	cout<<"Enter fuel type: "; cin>>ftype;
	cout<<endl;
	
	cout<<"Enter the price: "; cin>>p;
	cout<<endl;
	
	car1.setdata(coname, cname, ftype, p);
	car1.displaydata();
	
	// setting data in car2 using para constructor
	
	Cars car2(coname, cname, ftype, p);
	car2.displaydata();
	
	//copy constructor
	Cars car3 = car1;
	car3.displaydata();	
}

