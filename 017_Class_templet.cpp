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

template<typename T>
class Weight{
private:
	T kg;
public:
	void setData(T x){
        kg = x;
	}
	T getData(){
		return kg;
	}
};
 
int main() {
   init_code();
   
   // write your code here
   Weight <int>obj1;
   obj1.setData(5);
   cout<<obj1.getData();

   cout<<endl<<endl;

   Weight <double>obj2;
   obj2.setData(3748348399349389);
   cout<<obj2.getData();

   cout<<endl<<endl;

   Weight <float>obj

   return 0;
}