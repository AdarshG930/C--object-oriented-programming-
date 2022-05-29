#include<bits/stdc++.h>
#include<vector>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class Animals{
    public:
    	virtual void eat(){
    		cout<<"I am eating generic food"<<endl;
    	}
};
class Cat:public Animals{
	public :
	    void eat(){
	    	cout<<"I am eating cat food"<<endl;
	    }
};
class Dog:public Animals{
	public :
	    void eat(){
	    	cout<<"I am eating dog food"<<endl;
	    }
};

void function1(Animals *xyz){
    xyz->eat();
}
 
int main() {
   init_code();
   
   // write your code here
   Animals *ptr;
   Cat catobj;
   Dog dogobj;

   ptr = &catobj;

   function1(ptr);

   cout<<endl;

   ptr = &dogobj;

   function1(ptr);

   return 0;
}