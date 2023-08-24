#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int i=1;
    while(i<=n){
        //space prnit krlo
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //stars print krlo
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



    return 0;
}