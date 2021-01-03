#include<iostream>
#include<string>
using namespace std;

class Cars{
	private: // access specifier: only member fucntions of this class can access the data members 
	
	string car_company;
	string car_name;
	string fuel_type;
	double price;
	
	public: // can be used in main 
	
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
		cout<<price;
	}
};

int main(void){
	Cars car1; // object (car1) - variable of type class: (class is a user defined data type)
	
	string coname, cname, ftype;
	double p;
	
	cout<<"Enter the company name: "; cin>>coname;
	cout<<endl;
	
	cout<<"Enter the car name: "; cin>>cname;	
	cout<<endl;
	
	cout<<"Enter fuel type: "; cin>>ftype;
	cout<<endl;
	
	cout<<"Enter the price: "; cin>>p;
	
	car1.setdata(coname, cname, ftype, p);
	car1.displaydata();
	
}
