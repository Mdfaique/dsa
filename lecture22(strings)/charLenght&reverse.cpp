#include<iostream>
using namespace std;
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

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
    reverse(name,l);
    cout<<" reversed name is "<<name<<endl;

    
    
    
    return 0;
}