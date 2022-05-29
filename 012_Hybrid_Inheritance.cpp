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
class Base{
protected:
	int val;
};
class Derived1:virtual public Base{
public:
    Derived1(){
    	val = 1;
    }
    void getValue(){
    	cout<<val<<endl;
    }
};
class Derived2:virtual public Base{
public:
	Derived2(){
		val = 2;
	}
	void getValue(){
    	cout<<val<<endl;
    }
};
class Derived3:public Derived1,public Derived2{
public:
	void getValue(){
		cout<<"int value is : "<<Derived2::val;
	}
};
int main() {
   init_code();
   
   // write your code here
   Derived3 obj;
   obj.getValue();

   return 0;
}