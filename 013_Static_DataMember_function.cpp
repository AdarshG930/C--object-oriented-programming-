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
class MyClass{
    private :
        int x;
        static int count;

    public:
    	MyClass(){
    		count++;
    	}
        static int getCount(){
            return count;  // static member function can only return 
                           // static member variables
        }
};
// initialization
int MyClass::count = 0;

int main() {
   init_code();
   
   // write your code here
   cout<<"initial count : "<<MyClass::getCount()<<endl;
   
   MyClass obj1,obj2; //default constructor is called
   cout<<"cout after 2 object : "<<MyClass::getCount()<<endl;


   return 0;
}