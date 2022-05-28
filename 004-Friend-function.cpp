#include<bits/stdc++.h>
#include<vector>
using namespace std;
 

class Distance{
    private:
        
        int meters;

    public:
    	Distance(){
    		meters = 0;
    	}
    	void displayData(){
    		cout<<"meters value : "<<meters<<endl;

    	}
        /// prototype or signature
    	friend void addValue(Distance &d);
};

void addValue(Distance &d){
	d.meters = d.meters+5;
}
 
int main() {
   
   // write your code here
   Distance d1;
   d1.displayData();

   addValue(d1);

   d1.displayData();

   return 0;
}