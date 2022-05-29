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
class Weight{
    private:
    	int kg;
    public:
    	Weight(){
    		kg = 0;
    	}
    	Weight(int x){
            kg = x;
    	}

    	void printWeight(){
    		cout<<"weight in KG : "<<kg<<endl;
    	}

    	Weight operator ++(){ 
    		Weight temp;
    		temp.kg = ++kg;
    		return temp;
    	}
    	Weight operator ++(int){
    		Weight temp;
    		temp.kg = kg++;
    		return temp;
    	}
    	Weight operator --(){
    		Weight temp;
    		temp.kg = --kg;
    		return temp;
    	}
    	Weight operator --(int){
    		Weight temp;
    		temp.kg = kg--;
    		return temp;
    	}
};
 
int main() {
   init_code();
   
   //// write your code here
   Weight k1(3);
   k1.printWeight();
   cout<<endl;
   k1++;
   cout<<"k1++ : ";
   k1.printWeight();
   cout<<endl;
   ++k1;
   cout<<"++k1 : ";
   k1.printWeight();
   cout<<endl;
   k1--;
   cout<<"k1-- : ";
   k1.printWeight();
   cout<<endl;
   --k1;
   cout<<"--k1 : ";
   k1.printWeight();

   Weight obj1,obj2;
   obj2= ++obj1;
   obj2.printWeight();


   return 0;
}