//input(row wise,col wise), op, search in 2d.
#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int i,int j)
{
 for(int i=0;i<3;i++)
   {
    for(int j=0;j<4;j++)
    {
        if(arr[i][j]==target)
        return 1; 
    }
   }
   return 0;
}
int main(){
    int arr[3][4];
    // int arr[3][4]={{1,4,7,10},{2,5,8,11},{3,6,9,13}};
   //row wise input
   cout<<"enter the elements"<<endl;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<4;j++)
    {
        cin>>arr[i][j];  
    }
   }

   //col wise input
//    for(int i=0;i<4;i++)
//    {
//     for(int j=0;j<3;j++)
//     {
//         cin>>arr[j][i];
//     }
//    }
   
   
   //print
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<4;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<"enter the target"<<endl;
   int target;
   cin>>target;
   if(ispresent(arr,target,3,4))
   {
    cout<<"elemnt found"<<endl;
   }
   else cout<<"no found "<<endl;

    return 0;
}