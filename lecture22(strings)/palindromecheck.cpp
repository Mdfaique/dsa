#include<iostream>
using namespace std;
bool palindr(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e])return 0;
        else {s++;e--;}
    }
    return 1;
}
int length(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++) count++;
    return count;
}
int main()
{
    char name[20];
    cout<<" your name enter "<<endl;
    cin>>name;
    cout<<" your name is "<<name<<endl;
    cout<<" length is "<<length(name)<<endl;
    int l=length(name);
    if(palindr(name,l)){
        cout<<" name is palindrome "<<endl;
    }
    else cout<<" not palindrome "<<endl;

    

    
    
    
    return 0;
}