#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int prime=0;
    if(n==0||n==1){
        prime++;
        //cout<<"not prime";
        }
    
    for(int i=2;i<n;i++){
        if(n%i==0){prime++;}
        
    }
    if(prime==0){cout<<"prime";}
    else {
        cout<<"non prime";
    }

    return 0;
}