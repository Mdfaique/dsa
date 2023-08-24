#include<iostream>
using namespace std;
void say(string arr[], int n)
{
  if(n==0) return;
  int digit = n%10;
  n=n/10;
  say(arr,n);
  cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter the num "<<endl;
    cin>>n;
    say(arr,n);



    return 0;
}