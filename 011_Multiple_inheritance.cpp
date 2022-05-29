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

class A{
    public:
    	void printMessage(){
    		cout<<"Class A print Message Function"<<endl;
    	}
};
class B{
    public:
    	void printMessage(){
    		cout<<"Class B print Message Function"<<endl;
    	}
};
class AB:public A,public B{
	// public:
	// 	void printMessage(){
 //    		cout<<"Class AB print Message Function"<<endl;
 //    	}

	public:
		void printMessage(){
			A::printMessage();
		}
};
int main() {
   init_code();
   
   // write your code here
   AB obj;
   obj.printMessage();

   return 0;
}