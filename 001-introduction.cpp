#include <bits/stdc++.h>
#include<vector>
using namespace std;

class Cars{
    // Member variables or data members
    private:
    string company_name;
    string model_name;
    string fuel_type;
    float milage;
    double price;

    public:
    // Member functions
    void setData(string cname, string mname, string ftype, float m, double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        milage = m;
        price = p;
    }

    void displayData(){
        cout<<"Car properties"<<endl<<endl;
        cout<<"company Name : "<<company_name<<endl;
        cout<<"Model Name : "<<model_name<<endl;
        cout<<"fuel type : "<<fuel_type<<endl;
        cout<<"Milage : "<<milage<<endl;
        cout<<"price : "<<price<<endl;
    }
};

int main(){
    Cars c1,c2,c3;

    c1.setData("toyota","Altis","petrol",15.5,1500000);
    c2.setData("Hundai","Venue","petrol",13.5,1200000);
    c3.setData("BMW","Special Edition","petrol",16.5,7500000);

    c1.displayData();
    c2.displayData();
    c3.displayData();

    cout<<endl<<endl;

    return 0;
}