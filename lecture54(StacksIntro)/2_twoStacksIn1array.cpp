// codestudio

// ------------top1->[x,y,z,...n]<-top2----------------
// top one stacks elements in array from left to right and 
// top 2 stacks elemnts in same array from right to left

// link=https://www.codingninjas.com/codestudio/problems/two-stacks_983634?leftPanelTab=1&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb


// class TwoStack {
//     int *arr;
//     int top1;
//     int top2;
//     int size; 

// public:

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         // Write your code here.
//         this->size=s;
//         top1=-1;
//         top2=s;
//         arr=new int[s];
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//         // Write your code here.
//         // atleast 1 empty space presentt
//         if(top2-top1>1){
//             top1++;
//             arr[top1]=num;
//         }
//     }

//     // Push in stack 2.
//     void push2(int num) {
//         // Write your code here.
//          if(top2-top1>1){
//             top2--;
//             arr[top2]=num;
//         }
//     }

//     // Pop from stack 1 and return popped element.
//     int pop1() {
//         // Write your code here.
//         if(top1>=0){
//             int ans=arr[top1];
//             top1--;
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
//            // Write your code here.
//         if(top2<size){
//             int ans=arr[top2];
//             top2++;
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }
// };
