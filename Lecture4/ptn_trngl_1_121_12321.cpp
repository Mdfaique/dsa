#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=(n-i)){
            cout<<" ";
            j++;
        }
        int count=1;
        while(j<=n){
            
            cout<<count;
            count++;
            j++;
        }
        int st=i;
        while(j<=n+i-1){
            cout<<st-1;
            st--;
            j++;
        }
        cout<<endl;
        i++;
    }
   



    return 0;
}