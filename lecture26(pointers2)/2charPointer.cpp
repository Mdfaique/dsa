#include<iostream>
using namespace std;
int main(){
    char ch[7]="abcdef";
    cout<<ch<<endl;//in int arr case this would cout adrees here it shows abcdef
    

    char*c=&ch[0];
    cout<<c<<endl; //still prints full op



    return 0;
}