#include<iostream>
#include<math.h>
using namespace std;
int bit(int a){
    int bita,count;
    count=0;
    while(a!=0){
        bita=a&1;
        if(bita==1){count++;}
        a=a>>1;
    }
    return count;

}
int bitb(int b){
    int bitb,count;
    count=0;
    while(b!=0){
        bitb=b&1;
        if(bitb==1){count++;}
        b=b>>1;
    }
    return count;

}

int main(){
    int a,b,a1,a2,ans;
    cout<<"enter value of a and b";
    cin>>a;
    cout<<endl;
    cin>>b;
    a1=bit(a);
    a2=bitb(b);
    ans=a1+a2;
    cout<<"total no. of set bits"<<endl;
    cout<<ans;




    return 0;
}