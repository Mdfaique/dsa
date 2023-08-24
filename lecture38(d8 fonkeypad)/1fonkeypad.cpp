// leetcode solvd
// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// class Solution {
// private:
// void solve(string digits,string output,string mapping[],vector<string> &ans,int index)
// {
//     if(index>=digits.length())
//     {
//         ans.push_back(output);
//         return;
//     }

//     int number=digits[index]-'0'; //convrt string digit to int
//     string value=mapping[number]; map 2 with abc
//     for(int i=0;i<value.length();i++)
//     {
//         output.push_back(value[i]); ouput me a gya
//         solve(digits,output,mapping,ans,index+1); now a in op now index++ ie now 0n 3,3 me def ab wo d e f teeno se pair krega a ko
//         output.pop_back(); idhar a pop out taaki b aa ske
//     }
// }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits.length()==0) return ans;

//         string output="";
//         int index=0;
//         string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         solve(digits,output,mapping,ans,index);
//         return ans;
        
//     }
// };