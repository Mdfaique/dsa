// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n ";
//     cin>>n;
//     int i;
//     int prod=1;
//     for(i=1;i<=30;i++)
//     {
//         if(prod==n){cout<<"yes";}
//     {if(prod<INT_MAX/2)
//     {prod=prod*2;}}
    
//     }
//     cout<<"no";
// }

    #include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter value of n: ";
  cin>>n; cout<<endl;
  int prod = 1;
  int count = 0;
  for(int i=1; i<=30; i++){
      if(prod==n) count++;
      
      {
          if(prod<INT_MAX/2) prod*=2;
      }
  }
  if(count==0) cout<<"no";
  else cout<<"yes";
  
  return 0;
}
   



    

