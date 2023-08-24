#include<iostream>
using namespace std;
int main(){
   int i=5;
   int &j=i; //create a ref var j also works on 5
   cout<<i<<endl;
   i++;
   cout<<i<<endl;
   j++;
   cout<<i<<endl;



    return 0;
}