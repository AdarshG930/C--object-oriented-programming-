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

class MyBase{
	public:
		void show(){
            cout<<"Base class show function called"<<endl;
		}
		virtual void print(){
			cout<<"Base class print function called"<<endl;
		}
};

class MyDerived : public MyBase{
	void show(){
		cout<<"Derived class show function called"<<endl;
	}
	void print(){
		cout<<"Derived class print function called"<<endl;
	}
};
 
int main() {
   init_code();
   
   // write your code here
   MyBase *baseptr;
   MyDerived derivedobj;

   baseptr = &derivedobj;

   baseptr->print();
   baseptr->show();

   return 0;
}