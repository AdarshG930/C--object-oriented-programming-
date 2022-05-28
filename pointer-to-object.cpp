#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
class complexNumber{
    private:
    	int real;
    	float imaginary;
    public:
    	complexNumber(){

    	}
    	complexNumber(int r,float i){
    		real = r;
    		imaginary = i;
    	}

    	void displayData(){
    		cout<<"complex no. is"<<endl;
    		cout<<real<<" + "<<imaginary<<"i"<<endl<<endl;
    	}
    	int getrealPart(){
    		return real;
    	}
    	float getimaginaryPart(){
    		return imaginary;
    	}
};

 
complexNumber add2number(complexNumber n1,complexNumber n2){

	int r;
	float i;

	r = n1.getrealPart() + n2.getrealPart();

	i = n1.getimaginaryPart() + n2.getimaginaryPart();

	complexNumber temp(r,i);
    
	return temp;

}

int main() {
   
   // write your code here
   complexNumber comp1(2,3),comp2(4,5),comp3;

   comp1.displayData();

   cout<<endl;

   comp2.displayData();

   cout<<endl;

   cout<<"Addition of ";

   comp3 = add2number(comp1,comp2);

   comp3.displayData();


   ////// pointer to object ///////
   cout<<"pointer to object"<<endl;

   complexNumber *ptr1;
   ptr1 = &comp3;

   ptr1->displayData();
   

   return 0;
}