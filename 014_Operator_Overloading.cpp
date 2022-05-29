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
class Complex{
	private:
		int real , imag;
	public:
		Complex(){
			real =  imag = 0;
		}
		Complex(int r ,int i){
			real = r;
			imag = i;
		}
		void print(){
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
	    
	    // operator over loading 
		Complex operator +(Complex C){
			Complex temp(real,imag);
			temp.real = real+C.real;
			temp.imag = imag+C.imag;
			return temp;
		}

};
 
int main() {
   init_code();
   
   // write your code here
   Complex C1(5,4) ,C2(3,4),C3(4,7);
   C1.print();
   C2.print();
   C3.print();

   Complex C4;
   C4 = C1 + C2 + C3;
   C4.print();

   

   return 0;
}