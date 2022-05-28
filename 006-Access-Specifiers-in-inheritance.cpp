#include<bits/stdc++.h>
#include<vector>
using namespace std;
 

class MyBaseClass{
    public:
    	int x;

    	MyBaseClass(){
    		x=0;
    		y=0;
    		x=0;
    	}

    	void printProtectedData(){
    		cout<<"Y : "<<y<<endl;
    	}
    	
    protected:
    	int y;
    private:
    	int z;
};

class MyderivedClass: public MyBaseClass{
     // x is public
	 // y is proctected
	 // x is not accesible(it is private)
};

class MyderivedClass1: protected MyBaseClass{
	// x is protected
	// y is protected
	// x is not accesible(it is private)
};

class MyderivedClass2: protected MyBaseClass{
	// x is protected
	// y is protected
	// x is not accesible(it is private)
};


// ====== function using the member variable of base class
void MyOutsideFunction(MyBaseClass obj){
    cout<<"X : "<<obj.x<<endl;
    obj.printProtectedData();

    // z is private so it will give an error
    // cout<<"Z : "<<obj.z<<endl;
}

int main() {
   
   // write your code here
   MyBaseClass obj1;

   MyOutsideFunction(obj1);

   return 0;
}