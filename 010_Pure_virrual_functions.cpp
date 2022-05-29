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
class Shape{
public:
	virtual void getArea()=0; // this is pure virtual function
};
class Circle:public Shape{
	public:
	    void getArea(){
	        int r;
	        cin>>r;
	        cout<<"Area of circle is : "<<(3.14*r*r)<<endl;
	    }
};
class Rectangle:public Shape{
    public:
    	void getArea(){
    		int height;
    		int width;
    		cin>>height>>width;
    		cout<<"Area of rectangle is : "<<(height*width)<<endl;
    	}
};
 
int main() {
   init_code();
   
   // write your code here
   Circle c1;
   c1.getArea();

   Rectangle r1;
   r1.getArea();

   return 0;
}