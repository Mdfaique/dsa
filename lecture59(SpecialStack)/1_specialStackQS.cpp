// codestudio 

// link=https://www.codingninjas.com/codestudio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?topList=love-babbar-dsa-sheet-problems%3Fsource%3Dyoutube&campaign=Codestudio_Lovebabbar&utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Lovebabbar&leftPanelTab=1

// TC and SC both O(1)


// #include <stack>
// class SpecialStack {
//   // Define the data members.
//   stack<int> s;
//   int mini;
//   /*----------------- Public Functions of SpecialStack -----------------*/
// public:
//   void push(int data) {
//     // Implement the push() function.
//     // for 1st element
//     if (s.empty()) {
//       s.push(data);
//       mini = data;
//     } else {
//       if (data < mini) {
//         int val = 2 * data - mini;
//         s.push(val);
//         mini = data;
//       } else {
//         s.push(data);
//       }
//     }
//   }

//   int pop() {
//     // Implement the pop() function.
//     if (s.empty()) {
//       return -1;
//     }
//     int curr = s.top();
//     s.pop();
//     if (curr > mini) {
//       return curr;
//     } else {
//       int prevMin = mini;
//       int val = 2 * mini - curr;
//       mini = val;
//       return prevMin;
//     }
//   }

//   int top() {
//     // Implement the top() function.
//     if (s.empty()) {
//       return -1;
//     }
//     int curr = s.top();
//     if (curr < mini) {
//       return mini;
//     } else {
//       return curr;
//     }
//   }

//   bool isEmpty() {
//     // Implement the isEmpty() function.
//     return s.empty();
//   }

//   int getMin() {
//     // Implement the getMin() function.
//     if(s.empty())return -1;
//     return mini;
//   }
// };