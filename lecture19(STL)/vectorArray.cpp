#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 vector<int> a(5,1); // to allot 5 capacity and 1 value at all locations
 vector<int> l(a); //to copy elements of a in a new vector;
 cout<<"l vector "<<endl;
 for(int i:l){cout<<i<<" ";}
 cout<<endl; 

 cout<<"a vector "<<endl;
 for(int i:a){cout<<i<<" ";}
 cout<<endl;
 v.push_back(1);
 cout<<"size of vector "<<v.capacity()<<endl;

 v.push_back(2);
 cout<<"size of vector "<<v.capacity()<<endl;
  
  v.push_back(3);
 cout<<"size of vector "<<v.capacity()<<endl;
 cout<<"capacity is "<<v.capacity()<<endl;
 cout<<"size is "<<v.size()<<endl;
 cout<<"element at 2 is "<<v.at(2)<<endl;
 cout<<"frnt element is "<<v.front()<<endl;
 cout<<"back element is "<<v.back()<<endl;
 cout<<"befor pop "<<endl;
 for(int i:v){cout<<i<<" ";}
 cout<<endl;
 v.pop_back();
 cout<<"after pop "<<endl;

 for(int i:v){cout<<i<<" ";}
 cout<<endl;
//  when epting vector only size(elements stored)decreases not capacity(space alloted for placing value in vector)


 }
    
