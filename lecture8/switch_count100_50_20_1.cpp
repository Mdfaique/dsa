#include<iostream>
using namespace std;
int main(){
    int val,hund,fifty,twenty,one;   
    cout<<"enter the value"<<endl;
    cin>>val;
    switch(1){
        case 1:hund=val/100;cout<<"100's "<<hund<<endl;val=val%100;
        case 2:fifty=val/50;cout<<"50's  "<<fifty<<endl;val=val%50;
        case 3:twenty=val/20;cout<<"20's "<<twenty<<endl;val=val%20;
        case 4:one=val;cout<<"one "<<one<<endl;
        break;
    }
    

    return 0;
}