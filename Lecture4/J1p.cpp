#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    int col=1;
    int count=1;
    while(row<=n){
        while(col<=(n-1)){
            cout<<" ";
            col++;
        }
            while(col<=n){
                cout<<count;
                count++;
                col++;
                if(count==col){
                    --count;
                    cout<<count;
                }
                }
        
        
    
    return 0;
}
}