// link=https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

// implementation of queue using array.
#include<iostream>
using namespace std;
#include <bits/stdc++.h>
class Queue {
  int *arr;
  int qfront;
  int rear;
  int size;

public:
  Queue() {
    // Implement the Constructor
    size=100001;
    arr =new int[size];
    qfront =0;
    rear=0;
  }

  /*----------------- Public Functions of Queue -----------------*/

  bool isEmpty() {
    // Implement the isEmpty() function
    if(qfront==rear) return true;
    else return false;
  }

  void enqueue(int data) {
    // Implement the enqueue() function or push
    if(rear==size){
        cout<<"queue is full "<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
  }

  int dequeue() {
    // Implement the dequeue() function or pop
    if(qfront==rear){
        return -1;
    }else{
        int ans=arr[qfront];
        arr[qfront]=-1;
        qfront++;
        if(qfront==rear){
            qfront=0;
            rear=0;
        }
        return ans;
    }
  }

  int front() {
    // Implement the front() function
    if(qfront==rear) return -1;
    else return arr[qfront];
  }
};