// leetcode solvd
// ip= ["a","a","b","b","c","c","c"]
// op= ["a","2","b","2","c","3"]
// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i=0;
//         int ansind=0;
//         int n=chars.size();

//         while(i<n)
//         {
//             int j=i+1;
//             while(j<n && chars[i]==chars[j])
//             {
//                 j++;
//             }
//             chars[ansind++]=chars[i];
//             int count=j-i;
//             if(count>1)
//             {
//                 string cnt=to_string(count);
//                 for(char ch:cnt)
//                 {
//                     chars[ansind++]=ch;
//                 }
//             }
//             i=j;
//         }
//         return ansind;

        
//     }
// };