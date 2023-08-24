#include<iostream>
using namespace std;
int fib(int n){
    int i,a=0,b=1,fab;
    if(n==0){return 0;}
    if(n==1){return 0;}
    if(n==2){return 1;} 
    
    for(i=3;i<=n;i++){
        fab=a+b;
        a=b;
        b=fab;
       


    }
     return fab;
}
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    cout<<"nth term is"<<fib(n);


    return 0;
}