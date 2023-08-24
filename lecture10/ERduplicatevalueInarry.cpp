#include<iostream>
using namespace std;
int dupno(int n[],int size){
    int i,g;
    
    
        for(i=0;i<size;i++){
        g=0;
        int count=0;
        while(g<size)
        {
           
            if(n[i]!=n[g]){g++;}
            else{count++;g++;}
            
             

        }
        if(count>1){cout<<"dup no is "<<n[i]<<endl;}
        
        

    }
    return 0;
}

int main(){
    
    
    int arry[8]={0,1,2,1,2,5,6,6};
    int sizearry=sizeof(arry)/sizeof(int);
    cout<<"size of arry "<<sizearry;
    cout<<endl;
    cout<<"og arry"<<endl;
    
    for(int i=0;i<sizearry;i++)
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    dupno(arry,sizearry);
    cout<<"ok";



    return 0;
}