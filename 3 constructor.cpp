#include<iostream>
#include<string>
using namespace std;
class Cars{
	private:
		string car_company;
		string car_name;
		string fuel_type;
		double price;
		
		public:
			Cars(){ // default constructor: here it takes input from user and intializes data members
				string coname, cname, ftype;
				double p;
				
				cout<<"Enter the company name: "; cin>>coname;
				cout<<endl;
	
				cout<<"Enter the car name: "; cin>>cname;	
				cout<<endl;
	
				cout<<"Enter fuel type: "; cin>>ftype;
				cout<<endl;
	
				cout<<"Enter the price: "; cin>>p;
				cout<<endl;	
				
				car_company = coname;
				car_name = cname;
				fuel_type = ftype;
				price = p;			
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
	Cars car1; 
	car1.displaydata();
	Cars car2;
	car2.displaydata();
	
}
