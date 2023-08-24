#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
     d.push_back(3);
     d.push_back(4);
    d.push_front(2);
     for(int i:d){cout<<i<<" ";}
 cout<<endl; 
 cout<<"front element "<<d.at(0)<<endl;
 //d.pop_back();
//  d.pop_front();
//    for(int i:d){cout<<i<<" ";}
d.erase(d.begin(),d.begin()+2);// starting location and ending location for removing values in deq
for(int i:d){cout<<i<<" ";}






    return 0;
}