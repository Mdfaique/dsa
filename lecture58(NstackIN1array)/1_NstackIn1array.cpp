// codestudio 

// link=https://www.codingninjas.com/codestudio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb

// T.C=O[1]
// S.C=O(n+s)

// similar to 2 stacks in one array but approach is different

// #include <bits/stdc++.h>

// // Please DRY RUN FOR BETTER UNDERSTANDING PLEASE USE THIS CODE FOR DRY RUN

// // AS THIS APPROACH IS NOT DIRECTLY THINKABLE

// class NStack

// {

// public:
//   // Initialize your data structure.

//   int *a, *next, *top;

//   int size;

//   int freeSpot;

//   int n;

//   NStack(int N, int S)

//   {

//     // n is the number of stacks given to divide in an array

//     n = N;

//     // freeSpot is next space which is empty in an array

//     freeSpot = 0;

//     // size is the size of the given which is used to divide into n parts by

//     // formuls:- s/n;

//     size = S;

//     // Now initialising the arrays

//     a = new int[size];

//     top = new int[n];

//     next = new int[size];

//     for (int i = 0; i < size; i++) {

//       next[i] = i + 1;
//     }

//     next[size - 1] = -1;

//     for (int i = 0; i < n; i++) {

//       top[i] = -1;
//     }
//   }

//   // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the
//   // stack, and false otherwise.

//   bool push(int x, int m)

//   {

//     // if there is no freespot left in the array then we cannot add more
//     // elements

//     if (freeSpot == -1) {

//       return false;
//     }

//     // index is given by freeSpot for first operation index is 0

//     int index = freeSpot;

//     // now freespot is udated by the next array

//     freeSpot = next[index];

//     // next array index is given to freespot so it stores the element index

//     next[index] = top[m - 1];

//     // now pushing the element

//     a[index] = x;

//     // now top element is updated by the main array index

//     top[m - 1] = index;

//     return true;
//   }

//   // Pops top element from Mth Stack. Returns -1 if the stack is empty,
//   // otherwise returns the popped element.

//   int pop(int m)

//   {

//     // Steps are same as push operation as we reverses the steps;

//     if (top[m - 1] == -1) {

//       return -1;
//     }

//     int index = top[m - 1];

//     int poppedElement = a[index];

//     top[m - 1] = next[index];

//     next[index] = freeSpot;

//     freeSpot = index;

//     return poppedElement;
//   }
// };