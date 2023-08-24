#include<iostream>
using namespace std;
int main(){
   int row;
   int col;
   cout<<"enter row and col "<<endl;
   cin>>row>>col;

   //creating dynamic 2d arry
   int** arr=new int*[row];
   for(int i=0;i<row;i++)
   {
    arr[i]=new int[col];
   }

   //taking ip
   //for(int i=0;i<row;i++) //row wise ip
   for(int j=0;j<col;j++)   //col wise ip
   {
    //for(int j=0;j<col;j++) //row wise ip
    for(int i=0;i<row;i++)
    {
        cin>>arr[i][j];
    }
    
   }

   //taking op
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
   }

   //releasing mem
   for(int i=0; i<row; i++)
   {
    delete [] arr[i];
   }
   delete []arr;


    return 0;
}