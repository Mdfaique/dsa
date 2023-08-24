// qs=(x^n)%m
// code studio

// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 
// int modularExponentiation(int x, int n, int m) {
// 	// Write your code here.
//     int res=1;
//     while(n>0)
//     {
//         if(n&1)//odd
//         {
//             res= (1LL*res*x)%m; //1ll gives long int type
//         }
//         x=(1LL*x*x)%m;
//         n=n/2;
//     }
//     return res;
// }