#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revn=0,rem;
    while(n!=0){
        rem=n%10;
        revn=(revn*10)+rem;
        n/=10;

    }
    cout<<"rev no "<<revn;
    



    return 0;
}