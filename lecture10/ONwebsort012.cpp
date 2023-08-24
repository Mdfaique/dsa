#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    //sort zeros :
    int left = 0; int right =n-1;
    while(left<=right){
        if(arr[left]==0) left++;
        else{
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            right--;
        }
    }
    
    //sort 1s
    int p=0, q=n-1;
    while(p<=q){
        if(arr[p]==0 || arr[p]==1) p++;
            else{
                int temp = arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
            q--;
            }
    }
    
}