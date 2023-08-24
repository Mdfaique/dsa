#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float rem;
    float rvrno=0;
    while(n>0){
        rem=n%2;
        rvrno=(rvrno*10)+rem;
        n=n/2;
    }
    cout<<rvrno;


    return 0;
}