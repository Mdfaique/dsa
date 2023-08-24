#include<iostream>
using namespace std;
void sort012(int n[],int size)
{
  int i=0,j=size-1;
  while(i<j)
  {
    if(n[i]==0)
    {
      i++;
    }
    else
    {
       int temp = n[i];
            n[i] = n[j];
            n[j] = temp;
            j--;

    }
    
  }
  int p=0, q=size-1;
    while(p<=q){
        if(n[p]==0 || n[p]==1) p++;
            else{
                int temp = n[p];
            n[p] = n[q];
            n[q] = temp;
            q--;
            }
    }
   for(int i=0;i<size;i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;

}
int main(){

int arry[7]={0,1,2,2,0,1,1};
    int sizearry=sizeof(arry)/sizeof(int);
    cout<<"size of arry "<<sizearry;
    cout<<endl;
    cout<<"og arry"<<endl;
    
    for(int i=0;i<sizearry;i++)
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    sort012(arry,sizearry);


    return 0;
}