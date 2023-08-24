//input(row wise,col wise), op, search in 2d.
#include<iostream>
using namespace std;
void sum(int arr[][4],int i,int j)//print col wise sum
{ 
    cout<<"ans "<<endl;
     int maxi=-1;
    int row;
    for(int i=0;i<3;i++)
   { 
    int sum=0;
    for(int j=0;j<4;j++)
    {
        sum+=arr[i][j];
        
    }
    if(sum>maxi)
    {
        maxi=sum;
        row=i;
    }
    
   }
   cout<<"maxi is"<<maxi<<endl<<"row is"<<row;
}
int main(){
   int arr[3][4]={{1,4,7,10},{2,15,8,11},{3,6,9,1}};
  
   //print
   for(int i=0;i<3;i++)
   { 
    for(int j=0;j<4;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   sum(arr,3,4);
   

    return 0;
} 