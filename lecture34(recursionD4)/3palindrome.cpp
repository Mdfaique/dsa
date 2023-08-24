#include<iostream>
using namespace std;
bool palin(string str,int i,int n)
{
    if(i>n/2) return true;
    if(str[i]!=str[n-i]) return false;
    else{
         return palin(str,i+1,n);
    }
}
int main(){
    string str ="abba";
    int n=str.length()-1;
    bool check=palin(str,0,n);
    if(check) cout<<"palindrome";
    else cout<<" no ";




    return 0;
}