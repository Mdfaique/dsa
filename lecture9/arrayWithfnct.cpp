#include<iostream>
using namespace std;
void arr(int n[],int size ){
    for(int i=0;i<size;i++)
    cout<<n[i]<< " ";
    
}
int main(){
     int no[10]={1,2,3,4,5};
     cout<<"value ";
     arr(no,10);
     cout<<no[2];



    return 0;
}