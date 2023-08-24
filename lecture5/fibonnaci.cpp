#include<iostream>
using namespace std;
int main(){
   int n;
   int a=0;
   int b=1;
   cin>>n;
   cout<<a<<" "<<b<<" ";
   for(int i=1; i<=n-2; i++){
    int fab = a+b;
    cout<<fab<<" ";
    a=b;
    b=fab;

   }


    return 0;
}