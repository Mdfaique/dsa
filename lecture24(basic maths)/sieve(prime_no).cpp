// leetcode slvd
// class Solution {
// public:
//     int countPrimes(int n) {
//         vector<bool> prime(n+1,true);//all given no prime markd
//         prime[0]=prime[1]=0;
//         int cnt=0;
//         for(int i=2;i<n;i++)
//         {
//             if(prime[i])
//             cnt++;
//             for(int j=2*i;j<n;j=j+i)//multiple of prime marked 0, 2 ka 4,6,8 = fasle
//             {
//                 prime[j]=false;
//             }
//         }
//         return cnt;
//     }
// };