#include<bits/stdc++.h>
#include<vector>
using namespace std;
 

// Base class
class Shape{
    protected:
    	int width;
    	int height;
    public:
    	void setWidth(int w){
    		width = w;
    	}
    	void setHeight(int h){
    		height = h;
    	}
};

/// derived class
class Rectangel : public Shape{
    public:
    	int getArea(){
    		return(width * height);
    	}
};
int main() {
   
   // write your code here
   Rectangel react;
   react.setWidth(5);
   react.setHeight(4);

   cout<<"Area of rectangel : "<<react.getArea()<<endl;

   return 0;
}