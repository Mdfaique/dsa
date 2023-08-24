// codestudio solved
// case1 2
// case2 3
// In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.

// In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
// #include <bits/stdc++.h> 
// int countDistinctWays(int nStairs) {
    
//     if(nStairs<0) return 0;
//     if(nStairs==0) return 1;
//     return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
// }