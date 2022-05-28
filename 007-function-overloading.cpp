#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
class Animal{
    public:
    	void makeSound(){
    		cout<<"Animal sound"<<endl;
    	}
};

class Dog:public Animal{
    public:
    	void makeSound(){
    		cout<<"Dogs Barks"<<endl;
    	}
};

class Cat:public Animal{
	public:
		void makeSound(){
			cout<<"Cat Meow"<<endl;
		}
};

int main() {

   Animal a1;
   a1.makeSound();

   Dog d1;
   d1.makeSound();
   
   Cat c1;
   c1.makeSound();
   
   // write your code here

   return 0;
}