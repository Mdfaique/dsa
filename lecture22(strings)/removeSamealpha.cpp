// leet code solved
// ip = azxxzy
// op =ay
// class Solution {
// public:
//     string removeDuplicates(string S) {
//         if (S.empty())
//             return S;
        
//         string res;
//         for (int i = 0; i < S.size(); i++) {
//             if (!res.empty() && S[i] == res.back())
//                 res.pop_back();
//             else
//                 res.push_back(S[i]);
//         }
//         return res;
//     }
// };