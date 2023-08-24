#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int i=1;
   while(i<=n){
    int j=1;
    int count=1;
    while(j<=n-i+1){
        cout<<count;
        count++;
        j++;
    }
    while(j<n+i){
        cout<<"*";
        j++;
    }
    count--;
    while(j<=2*n){
        cout<<count;
        count--;
        j++;
    }
    cout<<endl;
    i++;
   }
   



    return 0;
}