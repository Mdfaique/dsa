#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int intersec(int n[],int size,int m[], int msize)
{
    int i,g;
    for(i=0;i<size;i++)
    {
        g=0;
        int count=0;
        while(g<msize)
        {
            if(n[i]==m[g]){count++;g++;}
            g++;
        }
        if(count>0){cout<<n[i]<<" ";}
    }
    return 0;
    // leet code
    // vector<int> ans;
    // for(int i=0;i<size;i++)
    // {
    //     for(int j=0;j<msize;j++)
    //     {
    //         if(n[i]==m[j])
    //         {
    //             ans.push_back(n[i]);
    //             m[j]=INT_MIN;
    //             break;
    //         }
    //     }
        
    // }
    // return ans;
}
int main(){
    
    
    int arry[6]={0,1,1,3,4,5,};
    int arry1[6]={5,1,8,8,9,0,};
    int sizearry=sizeof(arry)/sizeof(int);
    int sizearry1=sizeof(arry1)/sizeof(int);
    cout<<"size of arry "<<sizearry;
    cout<<endl;
    cout<<"og arry"<<endl;
    
    
    for(int i=0;i<sizearry;i++)
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    cout<<"inter arry"<<endl;
    intersec(arry,sizearry,arry1,sizearry1); 



    return 0;
}