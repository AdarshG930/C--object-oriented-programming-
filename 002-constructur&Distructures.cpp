#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
class Cars{
	// member variable or data members
	private:
		string company_name;
		string model_name;
		string fuel_type;
		float milage;
		double price;
    
    public:
        // Default constructor
    	Cars(){
            cout<<"defalut constructor called"<<endl;
            company_name = "BMW";
        }
        // Parametrized constructor
        Cars(string cname,string mname,string ftype,float m,double p){
            cout<<"parametrized constructor called"<<endl;
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            milage = m;
            price = p;
        }
        // Copy constructor
        Cars(Cars &obj){
            cout<<"copy constructor called"<<endl;
            company_name = obj.company_name;
            model_name = obj.model_name;
            fuel_type = obj.fuel_type;
            milage = obj.milage;
            price = obj.price;
        }

        // member functions
    	void setData(string cname,string mname,string ftype,float m,double p){
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            milage = m;
            price = p;
    	}

    	void displayData(){
    		cout<<"Car properties"<<endl<<endl;
    		cout<<"Company Name : "<<company_name<<endl; 
    		cout<<"Model Name : "<<model_name<<endl; 
    		cout<<"Fuel type : "<<fuel_type<<endl; 
    		cout<<"Milage : "<<milage<<endl; 
    		cout<<"Price : "<<price<<endl;
    	}

        // distructor
        ~Cars(){
            cout<<"distrustor Called"<<endl;
        }
};
 
int main() {   
   // write your code here

   Cars c1;
   c1.setData("Toyota", "Altis" , "petrol" , 15.5 , 1500000);
   c1.displayData();

   cout<<endl<<endl;

   Cars c2("BMW","new" , "petrol", 14.3 , 5500000);
   // c2.setData("Hundai", "Venue" , "petrol" , 13.5 , 1200000);
   c2.displayData();

   cout<<endl<<endl;
   
   Cars c3 = c1; // copy constructor is called 
   // c3.setData("BMW", "Special Edition" , "petrol" , 16.5 , 7500000);
   c3.displayData();

   // cout<<endl<<endl;

   return 0;
}