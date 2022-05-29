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
class Myclass1{
	// making Myclass2 as friend class
	friend class Myclass2;
	private:
	    int x;

	public:
		Myclass1(int a){
	        x = a;
		}
};

class Myclass2{
    public:
    	void showData(Myclass1 obj){
            cout<<"value of x: "<<obj.x<<endl;
    	}

};

 
int main() {
   init_code();
   
   // write your code here
   Myclass1 obj1(5);
   Myclass2 obj2;
   obj2.showData(obj1);

   return 0;
}