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


// int add(int x,int y){
// 	return(x+y);
// }
// float add(float x,float y){
// 	return(x+y);
// }
// double add(double x,double y){
// 	return(x+y);
// }


template<typename T>
T add(T x,T y){
	return(x+y);
}
int main() {
   init_code();
   
   // write your code here
   cout<<add<int>(3,4)<<endl;

   cout<<add<float>(3.45,5.75)<<endl;

   cout<<add<double>(1111111111111,343433434343);


   return 0;
}