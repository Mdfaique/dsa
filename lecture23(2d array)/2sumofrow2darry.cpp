//input(row wise,col wise), op, search in 2d.
#include<iostream>
using namespace std;
void sum(int arr[][4],int i,int j)//print col wise sum
{ 
    cout<<"sum is "<<endl;
    for(int i=0;i<4;i++)
   { 
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=arr[j][i];
    }
    cout<<sum;
    cout<<endl;
   }

//    void sum(int arr[][4],int i,int j)//print row  wise sum
// { 
//     cout<<"sum is "<<endl;
//     for(int i=0;i<3;i++)
//    {   
//     int sum=0;
//     for(int j=0;j<4;j++)
//     {
//         sum+=arr[i][j];
//     }
//     cout<<sum;
//     cout<<endl;
//    }

}
int main(){
   int arr[3][4]={{1,4,7,10},{2,5,8,11},{3,6,9,13}};
  
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